/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 07:45:36 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/17 06:27:04 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
	int                 _fixed_point_value; //fixed point value "integer part"
	static const int    _fractional_bits = 8; //fractional bits "fractional part"
    public:
	Fixed(); //default constructor "initializing"
	Fixed(Fixed const &f); //copy constructor "copying"
	Fixed(int const i); //int constructor "int to fixed point value"
	Fixed(float const f); //float constructor "float to fixed point value"
	~Fixed(); //destructor "destroying"
	Fixed &operator=(Fixed const &f); //assignation operator overload "copying"
	int getRawBits(void) const; //get raw bits "fixed point value"
	void setRawBits(int const raw); //set raw bits "fixed point value"
	float toFloat(void) const; //convert to float "fixed point value"
	int toInt(void) const; //convert to int "fixed point value"
};

//void	compare(Fixed const &a, Fixed const &b); //compare two fixed point values
std::ostream &operator<<(std::ostream &out, Fixed const &f); //output operator overload "printing"

#endif
