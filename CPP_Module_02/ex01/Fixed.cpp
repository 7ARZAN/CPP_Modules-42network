/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 07:45:46 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/19 07:37:59 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point_value(0){
	std::cout << "Default constructor called" << std::endl;
}

//sm
Fixed::Fixed(Fixed const &f){
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &f){
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed_point_value = f.getRawBits(); // getRawBits returns the value of _fixed_point_value
	return *this; // return the instance itself
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_point_value;
}

void	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_point_value = raw;
}

float	Fixed::toFloat(void) const{
	return (float)this->_fixed_point_value / (1 << this->_fractional_bits); //we shift the bits to the right to get the fractional part
}

int	Fixed::toInt(void) const{
    return this->_fixed_point_value >> this->_fractional_bits;
}

std::ostream &operator<<(std::ostream &out, Fixed const &f){
	out << f.toFloat();
	return out;
}

Fixed::Fixed(int const n){
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point_value = n << this->_fractional_bits;
}

Fixed::Fixed(float const n){
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point_value = roundf(n * (1 << this->_fractional_bits));
}
