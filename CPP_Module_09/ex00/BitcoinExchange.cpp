/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:57:38 by tarzan            #+#    #+#             */
/*   Updated: 2024/02/21 19:23:56 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "BitcoinExchange.hpp"
#include <iostream>
#include <string>
#include <cstdint>
#include <fstream>

bool	third_argument(std::string arg){
	if (arg.length() > 4){
		std::cout << "ERROR: The third argument must be a number between 0 and 1000" << std::endl;
		return (false);
	}
	for (int i = 0; i < arg.length(); i++){
		if (arg[i] < '0' || arg[i] > '9'){
			std::cout << "ERROR: The third argument must be a number between 0 and 1000" << std::endl;
			return (false);
		}
	}
	return (true);
}

bool	check_date(std::string date);
void	check_input_data(std::string data){
	std::string date;
	std::string price;
	std::string line;
	std::ifstream file(data);

	while (std::getline(file, line)){
		date = line.substr(0, 10);
		price = line.substr(11, line.length());
		if (date.length() != 10 || price.length() < 1){
			std::cout << "ERROR: file has incorrect data" << std::endl;
			return ;
		}
		if (date[4] != '-' || date[7] != '-'){
			std::cout << "ERROR: file has incorrect data" << std::endl;
			return ;
		}
		if (!check_date(date)){
			std::cout << "ERROR: file has incorrect data" << std::endl;
			return ;
		}
		for (int i = 0; i < price.length(); i++){
			if (price[i] < '0' || price[i] > '9'){
				std::cout << "ERROR: file has incorrect data" << std::endl;
				return ;
			}
		}
	}
}

bool	check_date(std::string date){
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

void	printData(std::string date, std::string price){
	std::cout << "Date: " << date << " Price: " << price << std::endl;
}

int	main(int ac, char **av){
	if (ac != 3){
		std::cerr << "Usage: " << av[0] << " <input_file>" << " <how_much_b1tc01n>" << std::endl;
		return (1);
	}
	if (!third_argument(av[2]))
		return (1);
	std::ifstream file(av[1]);
	if (!file.good())
		return (std::cerr << "ERROR: file does not exist" << std::endl, 1);
	check_input_data(av[1]);
	printData("2024-02-21", "1000");
	return (0);
}
