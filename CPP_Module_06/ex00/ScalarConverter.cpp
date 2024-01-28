/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 02:19:56 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/28 02:48:14 by elakhfif         ###   ########.fr       */
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
	char	c;
	std::stringstream ss;

	ss << this->_str;
	ss >> c;
	std::cout << "char: ";
	if (ss.fail())
		throw ImpossibleException();
	c = static_cast<char>(c);
	if (c < 32 || c > 126)
		throw NonDisplayableException();
	else
		std::cout << "'" << c << "'" << std::endl;
}

void	ScalarConverter::toInt(){
	int	i;
	std::stringstream ss;

	ss << this->_str;
	ss >> i;
	std::cout << "int: ";
	if (ss.fail())
		throw ImpossibleException();
	else
		std::cout << static_cast<int>(i) << std::endl;
}

void	ScalarConverter::toFloat(){
	float	f;
	std::stringstream ss;

	ss << this->_str;
	ss >> f;
	std::cout << "float: ";
	if (ss.fail())
		throw ImpossibleException();
	else
		std::cout << std::fixed << std::setprecision(this->_precision) << static_cast<float>(f) << "f" << std::endl;
}

void	ScalarConverter::toDouble(){
	double	d;
	std::stringstream ss;

	ss << this->_str;
	ss >> d;
	std::cout << "double: ";
	if (ss.fail())
		throw ImpossibleException();
	else
		std::cout << std::fixed << std::setprecision(this->_precision) << static_cast<double>(d) << std::endl;
}

const char	*ScalarConverter::NonDisplayableException::what() const throw(){
	return "Non displayable";
}

const char	*ScalarConverter::ImpossibleException::what() const throw(){
	return "impossible";
}
