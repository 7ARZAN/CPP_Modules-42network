/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:57:38 by tarzan            #+#    #+#             */
/*   Updated: 2024/06/13 10:20:13 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "BitcoinExchange.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <map>

class	BitcoinExchange{
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		std::map<std::string, double> data;
		bool	third_argument(std::string arg);
		double	GetExchangeRate(const std::string &date);
		bool	ValidateDate(const std::string &date);
		void	Process_input(const std::string &filename);
};

BitcoinExchange::BitcoinExchange(){
}

BitcoinExchange::~BitcoinExchange(){
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other){
	*this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other){
	if (this != &other)
		this->data = other.data;
	return (*this);
}

bool	BitcoinExchange::ValidateDate(const std::string &date){
	if (date.length() != 10)
		return false;
	if (date[4] != '-' || date[7] != '-')
		return false;
	std::string year = date.substr(0, 4);
	std::string month = date.substr(5, 2);
	std::string day = date.substr(8, 2);
	std::string leap_year = "28";

	for (int i = 0; i < 4; i++){
		if (year[i] < '0' || year[i] > '9')
			return (false);
	}
	for (int i = 0; i < 2; i++){
		if (month[i] < '0' || month[i] > '9')
			return (false);
	}
	for (int i = 0; i < 2; i++){
		if (day[i] < '0' || day[i] > '9')
			return (false);
	}
	if (month == "02"){
		if ((std::atoi(year.c_str()) % 4 == 0 && std::atoi(year.c_str()) % 100 != 0) || std::atoi(year.c_str()) % 400 == 0)
			leap_year = "29";
		else
			leap_year = "28";
		if (day > leap_year)
			return (false);
	}
	else if (month == "01" || month == "03" || month == "05" || month == "07" || month == "08" || month == "10" || month == "12"){
		if (day > "31")
			return (false);
	}
	else if (month == "04" || month == "06" || month == "09" || month == "11"){
		if (day > "30")
			return (false);
	}
	return (true);
}

double	BitcoinExchange::GetExchangeRate(const std::string &date){
	std::map<std::string, double>::iterator it = data.lower_bound(date);

	if (it == data.end())
		return (-1.0);
	else if (it == data.begin())
		return (-1.0);
	else
		return (--it)->second;
	if (it->first == date)
		return (it->second);
}

void	BitcoinExchange::Process_input(const std::string &filename){
	std::ifstream file(filename.c_str());
	std::string line;

	getline(file, line);
	if (line != "date | value")
		std::cerr << "ERROR: first line must be 'date | value'" << '\n';
	while (std::getline(file, line)){
		std::istringstream ss(line);
		std::string date;
		double value;
		char delimiter;

		if (!(ss >> date >> delimiter >> value)){
			std::cerr << "ERROR: Unable to parse line => " << line << '\n';
			continue;
		}
		if (delimiter != '|'){
			std::cerr << "ERROR: Expected '|' delimiter in line => " << line << '\n';
			continue;
		}
		if (!ValidateDate(date)){
			std::cerr << "ERROR: Invalid date format in line => " << line << '\n';
			continue;
		}
		double exchangeRate = GetExchangeRate(date);
		if (exchangeRate == -1.0){
			std::cerr << "ERROR: No exchange rate available for date => " << date << '\n';
			continue;
		}
		std::cout << date << " => " << value << " = " << value * exchangeRate << '\n';
	}
}

int	main(int ac, char **av){
	BitcoinExchange		exchange;

	if (ac != 2)
		return (std::cerr << "Usage: " << av[0] << " <input_file> " << std::endl, 1);
	exchange.Process_input(av[1]);
	return (EXIT_SUCCESS);
}
