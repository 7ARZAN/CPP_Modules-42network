/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:57:38 by tarzan            #+#    #+#             */
/*   Updated: 2024/02/16 15:24:38 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "BitcoinExchange.hpp"
#include <iostream>
#include <string>
#include <cstdint>

bool	check_date(std::string date){
	uint32_t year, month, day;
	std::string delimiter = "-";
	size_t pos = 0;
	std::string token;
	int i = 0;

	while ((pos = date.find(delimiter)) != std::string::npos) {
		token = date.substr(0, pos);
		if (i == 0)
			year = std::stoul(token); //stoul for unsigned long
		else if (i == 1)
			month = std::stoul(token); //stoul for unsigned long
		date.erase(0, pos + delimiter.length());
		i++;
	}
	day = std::stoul(date); //stoul for unsigned long
	while (date.find(delimiter) != std::string::npos)
		return (false);
	if (year < 2010 || year > 2021)
		return (false);
	if (month < 1 || month > 12)
		return (false);
	if (day < 1 || day > 31)
		return (false);
	return (true);
}

int	main(int argc, char **argv){
	if (argc != 2){
		std::cerr << "Usage: ./BitcoinExchange <date>" << std::endl;
		return (1);
	}
	if (!check_date(argv[1])){
		std::cerr << "Invalid date" << std::endl;
		return (1);
	}
	return (0);
}
