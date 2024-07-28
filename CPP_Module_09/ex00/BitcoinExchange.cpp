/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 01:48:16 by tarzan            #+#    #+#             */
/*   Updated: 2024/07/28 01:15:34 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <sstream>
#include <fstream>


static float stringToFloat(const std::string &value)
{
	float			result;
	std::stringstream	ss(value);

	ss >> result;
	return (result);	
}

static bool	isAllDigits(const std::string &value)
{
	size_t	dotCount = 0;
	size_t	digitCount = 0;
	size_t	i = 0;

	while (i < value.length()){
		if (value[i] == '.')
			dotCount++;
		if (isdigit(value[i]))
			digitCount++;
		i++;
	}
	if (dotCount > 1 || digitCount != (value.length() - dotCount))
		return (false);
	return (true);
}

static bool	isValidDate(const std::string &date){
	std::string	year;
	std::string	month;
	std::string	day;

	if (date.length() != 10)
	{
		std::cerr << "ERROR: invalid date format.\n";
		return (false);
	}
	year = date.substr(0, 4);
	month = date.substr(5, 2);
	day = date.substr(8, 2);
	if (!isAllDigits(year) || !isAllDigits(month) || !isAllDigits(day))
	{
		std::cerr << "ERROR: invalid date format.\n";
		return (false);
	}
	if (stoi(year) < 2000 || stoi(year) > 2021)
	{
		std::cerr << "ERROR: invalid year.\n";
		return (false);
	}
	if (stoi(month) < 1 || stoi(month) > 12)
	{
		std::cerr << "ERROR: invalid month.\n";
		return (false);
	}
	if (stoi(day) < 1 || stoi(day) > 31)
	{
		std::cerr << "ERROR: invalid day.\n";
		return (false);
	}
	return (true);
}

static bool	isValidValue(const std::string &value)
{
	float	realValue;
	
	if (!isAllDigits(value))
	{
		std::cerr << "ERROR: invalid value format.\n";
		return (false);
	}
	realValue = stringToFloat(value);
	if (realValue < 0)
	{
		std::cerr << "ERROR: invalid value.\n";
		return (false);
	}
	return (true);
}

static std::string trim(const std::string &str, const std::string &charList)
{
	size_t head = str.find_first_not_of(charList);
	size_t tail = str.find_last_not_of(charList);

	if (head != std::string::npos)
		return (str.substr(head, ++tail - head));
	return ("");
}

BitcoinExchange::BitcoinExchange(void)
{
	std::string		key;
	std::string		value;
	std::string		line;
	std::ifstream	data("./data.csv");

	if (!data.is_open())
	{
		std::cerr << "ERROR: unable to access Database.\n";
		exit(1);
	}
	getline(data, line);
	while (getline(data, line))
	{
		key = line.substr(0, line.find(","));
		value = line.substr(line.find(",") + 1);
		this->data[key] = stringToFloat(value);
	}
	data.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &origin)
{
	*this = origin;
}

BitcoinExchange::~BitcoinExchange(void)
{
	
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &origin)
{
	if (this == &origin)
		this->data = origin.data;
	return (*this);
}

double	BitcoinExchange::getBitcoinPrice(const std::string &date)
{
	float							result = 0;
	std::map<std::string, double>::iterator it;
	
	if (!isValidDate(date))
	{
		std::cerr << "ERROR: Bad input => " << date << "\n";
		return (-1); 
	}
	
	for (it = this->data.begin(); it != data.end(); it++)
	{
		if (it->first > date)
			break;
		if (it->first <= date)
			result = it->second;
	}
	return (result);
}

void BitcoinExchange::handleTables(const std::string &path)
{
	float			exchangerate;
	std::string		key;
	std::string		value;
	std::string		line;
	std::ifstream	data(path.c_str());

	if (!data.is_open())
	{
		std::cerr << "ERROR: unable to access file.\n";
		return ;
	}
	getline(data, line);
	if (line != "date | value")
	{
		std::cerr << "ERROR: invalid file format.\n";
		data.close();
		return ;
	}
	while (getline(data, line))
	{
		key = trim(line.substr(0, line.find("|")), " ");
		value = trim(line.substr(line.find("|") + 1), " ");
		exchangerate = getBitcoinPrice(key);

		if (exchangerate < 0)
			continue;
		if (isValidValue(value))
			std::cout << key << " => " << value << " = " << exchangerate * stringToFloat(value) << "\n";
	}
	data.close();
}
