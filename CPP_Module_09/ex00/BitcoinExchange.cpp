/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 01:48:16 by tarzan            #+#    #+#             */
/*   Updated: 2024/07/27 20:59:04 by tarzan           ###   ########.fr       */
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
	size_t	periodsCount;

	periodsCount = 0;
	for (int i = 0; value[i]; i++){
		if (value[i] == '.' && value[i + 1] && !periodsCount)
			periodsCount++;
		else if (!isdigit(value[i]))
			return (false);
	}
	return (true);
}

static bool	isValidDate(const std::string &date)
{
	std::string		year;
	std::string		month;
	std::string		day;
	size_t			firstHyphen = date.find("-");
	size_t			secondHyphen = date.find("-", firstHyphen + 1);
	
	year = date.substr(0, firstHyphen);
	month = date.substr(firstHyphen + 1, secondHyphen - firstHyphen - 1);
	day = date.substr(secondHyphen + 1);
	
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

static bool	isValidValue(const std::string &value)
{
	float	temp;

	temp = stringToFloat(value);

	if (temp < 0)
	{
		std::cerr << "ERROR: not a positive number.\n";
		return (false);
	}
	if (temp > 1000)
	{
		std::cerr << "ERROR: too large of a number.\n";
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
