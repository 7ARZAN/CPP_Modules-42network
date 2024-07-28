/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 01:48:16 by tarzan            #+#    #+#             */
/*   Updated: 2024/07/28 06:01:49 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <sstream>
#include <fstream>
#include <cctype>
#include <iostream>
#include <string>
#include <map>

float	BitcoinExchange::stringToFloat(const std::string &value){
	float	result;

	std::stringstream ss(value);
	ss >> result;
	return result;
}

bool	BitcoinExchange::isAllDigits(const std::string &value){
    bool	dotCounter;
    size_t	i;

    i = 0;
    dotCounter = false;
    while (value[i]){
	if (value[i] == '.' && value[i + 1] && !dotCounter)
	    dotCounter = true;
	else if (!isdigit(value[i]))
	    return false;
	i++;
    }
    return true;
}

bool	BitcoinExchange::isValidDate(const std::string &date){
	std::string	year;
	std::string	month;
	std::string	day;
	size_t		FirstHyphen;
	size_t		SecondHyphen;

	FirstHyphen = date.find("-");
	SecondHyphen = date.find("-", FirstHyphen + 1);
	year = date.substr(0, FirstHyphen);
	month = date.substr(FirstHyphen + 1, SecondHyphen - FirstHyphen - 1);
	day = date.substr(SecondHyphen + 1);
	if (!isAllDigits(year) || !isAllDigits(month) || !isAllDigits(day))
		return (false);
	if (year.length() != 4)
		return (false);
	if (month.length() != 2 || (int)stringToFloat(month) < 1 || (int)stringToFloat(month) > 12)
		return (false);
	if (day.length() != 2 || (int)stringToFloat(day) < 1 || (int)stringToFloat(day) > 31)
		return (false);
	return (true);
}

bool	BitcoinExchange::isValidValue(const std::string &value){
	float	temp;

	temp = stringToFloat(value);
	if (temp < 0){
		std::cerr << "ERROR: not a positive number.\n";
		return (false);
	}
	if (temp > 1000){
		std::cerr << "ERROR: too large of a number.\n";
		return (false);
	}
	return (true);

}

std::string	BitcoinExchange::trim(const std::string &str, const std::string &charList){
	size_t	Head;
	size_t	Tail;

	Head = str.find_first_not_of(charList);
	Tail = str.find_last_not_of(charList);
	if (Head != std::string::npos)
		return (str.substr(Head, ++Tail - Head));
	return ("");
}

BitcoinExchange::BitcoinExchange(){
	std::ifstream	data("./data.csv");
	std::string	row;
	std::string	date;
	
	if (!data.is_open()){
		std::cerr << "ERROR: unable to access Database.\n";
		exit(1);
	}
	getline(data, row);
	while (getline(data, row)){
		date = row.substr(0, row.find(","));
		this->data[date] = stringToFloat(row.substr(row.find(",") + 1));
	}
	data.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &origin) : data(origin.data){
}

BitcoinExchange::~BitcoinExchange(){

}

double BitcoinExchange::getBitcoinPrice(const std::string &date){
	float	result;
	std::map<std::string, float>::const_iterator it;

	result = 0;
	if (!isValidDate(date)){
		std::cerr << "ERROR: Bad input => " << date << "\n";
		return (-1);
	}
	for (it = this->data.begin(); it != data.end(); it++){
		if (it->first > date)
			break;
		if (it->first <= date)
			result = it->second;
	}
	return (result);
}

void BitcoinExchange::handleTables(const std::string &path) {
	float			exchangerate;
	std::string		date;
	std::string		value;
	std::string		row;
	std::ifstream	data(path.c_str());

	if (!data.is_open()){
		std::cerr << "ERROR: unable to access file.\n";
		return ;
	}
	getline(data, row);
	if (row != "date | value"){
		std::cerr << "ERROR: invalid file format.\n";
		data.close();
		return ;
	}
	while (getline(data, row)){
		date = trim(row.substr(0, row.find("|")), " ");
		value = trim(row.substr(row.find("|") + 1), " ");
		exchangerate = getBitcoinPrice(date);
		if (exchangerate < 0)
			continue;
		if (isValidValue(value))
			std::cout << date << " => " << value << " = " << exchangerate * stringToFloat(value) << "\n";
	}
	data.close();
}
