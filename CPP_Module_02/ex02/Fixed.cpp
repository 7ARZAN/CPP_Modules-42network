/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 00:18:22 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/19 07:40:10 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fixed_point_value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &f){
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &f){
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed_point_value = f.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point_value);
}

void Fixed::setRawBits(int const raw){
	this->_fixed_point_value = raw;
}

Fixed::Fixed(int const n){
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point_value = n << this->_fractional_bits;
}

Fixed::Fixed(float const f){
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point_value = roundf(f * (1 << this->_fractional_bits));
}

float Fixed::toFloat(void) const{
	return ((float)this->_fixed_point_value / (1 << this->_fractional_bits));
}

int Fixed::toInt(void) const{
	return (this->_fixed_point_value >> this->_fractional_bits);
}

std::ostream &operator<<(std::ostream &out, Fixed const &f){
	out << f.toFloat();
	return (out);
}

bool Fixed::operator>(Fixed const &f) const{
	return (this->_fixed_point_value > f.getRawBits());
}

bool Fixed::operator<(Fixed const &f) const{
	return (this->_fixed_point_value < f.getRawBits());
}

bool Fixed::operator>=(Fixed const &f) const{
	return (this->_fixed_point_value >= f.getRawBits());
}
bool Fixed::operator<=(Fixed const &f) const{
	return(this->_fixed_point_value <= f.getRawBits());
}

bool Fixed::operator==(Fixed const &f) const{
	return (this->_fixed_point_value == f.getRawBits());
}

bool Fixed::operator!=(Fixed const &f) const{
	return (this->_fixed_point_value != f.getRawBits());
}

Fixed	Fixed::operator+(Fixed const &f) const{
	return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &f) const{
	return (Fixed(this->toFloat() - f.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &f) const{
	return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &f) const{
	return (Fixed(this->toFloat() / f.toFloat()));
}

Fixed& Fixed::operator++(){
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed& Fixed::operator--(){
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed tmp = *this;
	this->setRawBits(this->getRawBits() + 1);
	return (tmp);
}

Fixed Fixed::operator--(int){
	Fixed tmp = *this;
	this->setRawBits(this->getRawBits() - 1);
	return (tmp);
}

Fixed& Fixed::min(Fixed &f1, Fixed &f2){
	return (f1 < f2 ? f1 : f2);
}

Fixed const &Fixed::min(Fixed const &f1, Fixed const &f2){
	return (f1 < f2 ? f1 : f2);
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2){
	return (f1 > f2 ? f1 : f2);
}

Fixed const &Fixed::max(Fixed const &f1, Fixed const &f2){
	return (f1 > f2 ? f1 : f2);
}
