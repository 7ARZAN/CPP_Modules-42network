/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:57:38 by tarzan            #+#    #+#             */
/*   Updated: 2024/02/17 17:27:39 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "BitcoinExchange.hpp"
#include <iostream>
#include <string>
#include <cstdint>
#include <fstream>

bool	check_file(std::string file){
	std::ifstream f(file);

	if (f.good()){
		f.close();
		return (true);
	}
	return (false);
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

int	main(int argc, char **argv){
	if (argc != 2){
		std::cerr << "Usage: ./BitcoinExchange <file>" << std::endl;
		return (1);
	}
	if (!check_file(argv[1])){
		std::cerr << "Invalid file" << std::endl;
		return (1);
	}
	std::string date;
	std::cout << "Enter the date (YYYY-MM-DD): ";
	std::cin >> date;
	if (!check_date(date)){
		std::cerr << "Invalid date" << std::endl;
		return (1);
	}
	// BitcoinExchange exchange(argv[1]);
	// exchange.get_data(date);
	// exchange.display();
	return (0);
}
