/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 01:48:16 by tarzan            #+#    #+#             */
/*   Updated: 2024/12/24 19:31:23 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static void	msg(const std::string &msg, bool status){
	if (status)
		std::cout << GREEN << "[SUCCESS]: " << YELLOW << msg << "\n";
	else if (!status)
		std::cerr << RED << "[ERROR]: " << YELLOW << msg << "\n";
}

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
	float	tmp;

	tmp = stringToFloat(value);
	if (!value.length() || !isAllDigits(value))
		return (msg("Bad input => " + value, false), false);
	if (tmp < 0)
		return (msg("not a positive number.", false), false);
	if (tmp > 1000)
		return (msg("really? you have more than 1000 bitcoins?", false), false);
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
		msg("unable to access file.", false);
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

double	BitcoinExchange::getBitcoinPrice(const std::string &date){
	std::map<std::string, float>::const_iterator	it;
	float	result;

	result = 0;
	if (!isValidDate(date))
		return (msg("Bad input => " + date, false), -1);
	for (it = this->data.begin(); it != data.end(); it++){
		if (it->first > date)
			break;
		if (it->first <= date)
			result = it->second;
	}
	return (result);
}

void	BitcoinExchange::handleTables(const std::string &path){
	std::ifstream	data(path.c_str());
	std::string	date;
	std::string	value;
	std::string	row;
	float		BitcoinPrice;

	if (!data.is_open()){
		msg("unable to access file.", false);
		return ;
	}
	getline(data, row);
	if (row != "date | value"){
		msg("bad file format.", false);
		data.close();
		return ;
	}
	while (getline(data, row)){
		date = trim(row.substr(0, row.find("|")), " ");
		value = trim(row.substr(row.find("|") + 1), " ");
		BitcoinPrice = getBitcoinPrice(date);
		if (BitcoinPrice < 0)
			continue;
		if (isValidValue(value))
			msg(date + " => " + value + " = " + std::to_string(BitcoinPrice * stringToFloat(value)), true);
	}
	data.close();
}
