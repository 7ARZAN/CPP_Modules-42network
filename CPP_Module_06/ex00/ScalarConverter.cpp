/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 02:19:56 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/30 04:47:04 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(std::string str): _str(str), _precision(1){}

ScalarConverter::ScalarConverter(ScalarConverter const& src){
	*this = src;
}

ScalarConverter::~ScalarConverter(){}

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const& rhs){
	if (this != &rhs){
		this->_str = rhs._str;
		this->_precision = rhs._precision;
	}
	return *this;
}

void	ScalarConverter::convert(){
	try{
		this->toChar();
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	try{
		this->toInt();
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	try{
		this->toFloat();
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	try{
		this->toDouble();
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
}

void	ScalarConverter::toChar(){
	int	i;
	std::stringstream ss;
	char	c = this->_str[0];

	ss << this->_str;
	ss >> i;
	std::cout << "char: ";
	// if (ispseudoLiteral(this->_str) == true)
	// 	std::cout << this->_str << std::endl;
	if (this->_str.length() == 1 && isalpha(c) == true)
		std::cout << "'" << this->_str << "'" << std::endl;
	else if (ss.fail() || i > 127 || i < 0)
		throw ImpossibleException();
	else if (i < 32 || i == 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(i) << std::endl;
}

void	ScalarConverter::toInt(){
	int	i;
	std::stringstream ss;
	char	c = this->_str[0];

	ss << this->_str;
	ss >> i;
	std::cout << "int: ";
	// if (ispseudoLiteral(this->_str) == true)
	// 	std::cout << this->_str << std::endl;
	if (this->_str.length() == 1 && isalpha(c) == true)
		std::cout << static_cast<int>(c) << std::endl;
	else if (ss.fail() || i > 2147483647 || i < -2147483648)
		throw ImpossibleException();
	else
		std::cout << static_cast<int>(i) << std::endl;
}

void	ScalarConverter::toFloat(){
	float	f;
	std::stringstream ss;
	char	c = this->_str[0];

	ss << this->_str;
	ss >> f;
	std::cout << "float: ";
	if (ispseudoLiteral(this->_str) == true)
		std::cout << this->_str << std::endl;
	else if (this->_str.length() == 1 && isalpha(c) == true)
		std::cout << std::fixed << std::setprecision(this->_precision) << static_cast<float>(c) << "f" << std::endl;
	else if (ss.fail() || f > 2147483647 || f < -2147483648)
		throw ImpossibleException();
	else
		std::cout << std::fixed << std::setprecision(this->_precision) << static_cast<float>(f) << "f" << std::endl;
}

void	ScalarConverter::toDouble(){
	double	d;
	std::stringstream ss;
	char	c = this->_str[0];

	ss << this->_str;
	ss >> d;
	std::cout << "double: ";
	if (ispseudoLiteral(this->_str) == true)
		std::cout << this->_str << std::endl;
	else if (this->_str.length() == 1 && isalpha(c) == true)
		std::cout << std::fixed << std::setprecision(this->_precision) << static_cast<double>(c) << std::endl;
	else if (ss.fail() || d > 2147483647 || d < -2147483648)
		throw ImpossibleException();
	else
		std::cout << std::fixed << std::setprecision(this->_precision) << static_cast<double>(d) << std::endl;
}

bool	ScalarConverter::ispseudoLiteral(std::string str){
	std::string	pseudoLiterals[8] = {"nan", "nanf", "inf", "inff", "+inf", "+inff", "-inf", "-inff"};
	for (int i = 0; i < 8; i++)
		if (str == pseudoLiterals[i])
			return true;
	return false;
}

const char	*ScalarConverter::NonDisplayableException::what() const throw(){
	return "Non displayable";
}

const char	*ScalarConverter::ImpossibleException::what() const throw(){
	return "impossible";
}