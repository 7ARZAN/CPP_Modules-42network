/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 07:45:36 by elakhfif          #+#    #+#             */
/*   Updated: 2023/11/24 07:54:45 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
	int                 _fixed_point_value; //fixed point value
	static const int    _fractional_bits = 8; //fractional bits
    public:
	Fixed(); //default constructor
	Fixed(Fixed const &f); //copy constructor
	Fixed(int const i); //int constructor
	Fixed(float const f); //float constructor
	~Fixed(); //destructor
	Fixed &operator=(Fixed const &f); //assignation operator overload
	int getRawBits(void) const; //get raw bits
	void setRawBits(int const raw); //set raw bits
	float toFloat(void) const; //convert to float
	int toInt(void) const; //convert to int
};

void	compare(Fixed const &a, Fixed const &b);

#endif
