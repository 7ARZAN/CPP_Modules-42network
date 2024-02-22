/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:57:38 by tarzan            #+#    #+#             */
/*   Updated: 2024/02/22 20:16:33 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "BitcoinExchange.hpp"
#include <iostream>
#include <string>
#include <cstdint>
#include <fstream>

// bool	third_argument(std::string arg){
// 	if (arg.length() > 4)
// 		return (std::cout << "ERROR: The third argument must be a number between 0 and 1000" << std::endl, false);
// 	for (int i = 0; i < arg.length(); i++)
// 		if (arg[i] < '0' || arg[i] > '9' || arg > "1000")
// 			return (std::cout << "ERROR: The third argument must be a number between 0 and 1000" << std::endl, false);
// 	return (true);
// }
//
// bool	check_date(std::string date);
// void	check_input_data(std::string data){
// 	std::string date;
// 	std::string price;
// 	std::string line;
// 	std::ifstream file(data);
//
// 	while (std::getline(file, line)){
// 		date = line.substr(0, 10);
// 		price = line.substr(11, line.length());
// 		if (date.length() != 10 || price.length() < 1){
// 			std::cout << "ERROR: file has incorrect data" << std::endl;
// 			return ;
// 		}
// 		if (date[4] != '-' || date[7] != '-'){
// 			std::cout << "ERROR: file has incorrect data" << std::endl;
// 			return ;
// 		}
// 		if (!check_date(date)){
// 			std::cout << "ERROR: file has incorrect data" << std::endl;
// 			return ;
// 		}
// 		for (int i = 0; i < price.length(); i++){
// 			if (price[i] < '0' || price[i] > '9'){
// 				std::cout << "ERROR: file has incorrect data" << std::endl;
// 				return ;
// 			}
// 		}
// 	}
// }
//
// bool	check_date(std::string date){
// 	std::string year = date.substr(0, 4);
// 	std::string month = date.substr(5, 2);
// 	std::string day = date.substr(8, 2);
// 	std::string leap_year = "28";
//
// 	for (int i = 0; i < 4; i++){
// 		if (year[i] < '0' || year[i] > '9')
// 			return (false);
// 	}
// 	for (int i = 0; i < 2; i++){
// 		if (month[i] < '0' || month[i] > '9')
// 			return (false);
// 	}
// 	for (int i = 0; i < 2; i++){
// 		if (day[i] < '0' || day[i] > '9')
// 			return (false);
// 	}
// 	if (month == "02"){
// 		if ((std::atoi(year.c_str()) % 4 == 0 && std::atoi(year.c_str()) % 100 != 0) || std::atoi(year.c_str()) % 400 == 0)
// 			leap_year = "29";
// 		else
// 			leap_year = "28";
// 		if (day > leap_year)
// 			return (false);
// 	}
// 	else if (month == "01" || month == "03" || month == "05" || month == "07" || month == "08" || month == "10" || month == "12"){
// 		if (day > "31")
// 			return (false);
// 	}
// 	else if (month == "04" || month == "06" || month == "09" || month == "11"){
// 		if (day > "30")
// 			return (false);
// 	}
// 	else
// 		return (false);
// 	return (true);
// }
//
// void	printData(std::string date, std::string price){
// 	std::cout << "Date: " << date << " Price: " << price << std::endl;
// }
//
// int	main(int ac, char **av){
// 	if (ac != 3){
// 		std::cerr << "Usage: " << av[0] << " <input_file>" << " <how_much_b1tc01n>" << std::endl;
// 		return (1);
// 	}
// 	if (!third_argument(av[2]))
// 		return (1);
// 	std::ifstream file(av[1]);
// 	if (!file.good())
// 		return (std::cerr << "ERROR: file does not exist" << std::endl, 1);
// 	check_input_data(av[1]);
// 	printData("2024-02-21", "1000");
// 	return (0);
// }

#include <sstream>
#include <map>
class	BitcoinExchange{
public:
	//BitcoinExchange();
	//~BitcoinExchange();
	//BitcoinExchange(const BitcoinExchange &other);
	//BitcoinExchange &operator=(const BitcoinExchange &other);
	std::map<std::string, double> data;
	double	GetExchangeRate(const std::string &date);
	bool	ValidateDate(const std::string &date);
	bool	ValidateValue(double value);
	void	Process_input(const std::string &filename);
};

bool	BitcoinExchange::ValidateDate(const std::string &date){
	if (date.length() != 10) {
		return false;
	}

	if (date[4] != '-' || date[7] != '-') {
		return false;
	}

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
	else
		return (false);
	return (true);
}

bool	BitcoinExchange::ValidateValue(double value){
	if (value < 0.0 || value > 1000.0) {
		std::cerr << "Error: Value must be between 0 and 1000 => "
			  << value << '\n';
		return false;
	}
	return true;
}

double	BitcoinExchange::GetExchangeRate(const std::string &date){
	std::map<std::string, double>::iterator it = data.lower_bound(date);
	if (it->first == date)
		return (it->second);
	else if (it == data.begin())
		return (-1.0);
	else
		return (--it)->second;
}
void	BitcoinExchange::Process_input(const std::string &filename){
	std::ifstream file(filename.c_str());
	std::string line;
	std::getline(file, line); // Skip header line
	while (std::getline(file, line)) {
		std::istringstream ss(line);
		std::string date;
		double value;
		char delimiter;

		if (!(ss >> date >> delimiter >> value)) {
			std::cerr << "Error: Unable to parse line => "
				  << line << '\n';
			continue;
		}

		if (delimiter != '|') {
			std::cerr << "Error: Expected '|' delimiter in line => "
				  << line << '\n';
			continue;
		}

		if (!ValidateDate(date)) {
			std::cerr << "Error: Invalid date format in line => "
				  << line << '\n';
			continue;
		}

		if (!ValidateValue(value)) {
			continue;
		}

		double exchangeRate = GetExchangeRate(date);
		if (exchangeRate == -1.0) {
			std::cerr << "Error: No exchange rate available for date => "
				  << date << '\n';
			continue;
		}

		std::cout << date << " => "
			  << value << " = " << value * exchangeRate
			  << '\n';
	}
}

int	main(int ac, char **av){
	if (ac != 3){
		std::cerr << "Usage: " << av[0] << " <input_file>" << " <how_much_b1tc01n>" << std::endl;
		return (1);
	}
	try{
		BitcoinExchange exchange;
		exchange.Process_input(av[1]);
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
