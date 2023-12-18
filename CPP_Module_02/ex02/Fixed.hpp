/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 00:18:31 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/18 06:51:17 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
	    int _fixed_point_value;
	    static const int _fractional_bits = 8;
    public:
	    Fixed(); //default constructor
	    Fixed(const int n); //constructor from an int
	    Fixed(const float n); //constructor from a float
	    Fixed(Fixed const &f); //copy constructor
	    ~Fixed(); //destructor 
	    Fixed &operator=(Fixed const &f); //assignment operator
	    int getRawBits(void) const; //returns the raw value of the fixed point value
	    void setRawBits(int const raw); //sets the raw value of the fixed point value
	    float toFloat(void) const; //converts the fixed point value to a floating point value
	    int toInt(void) const; //converts the fixed point value to an integer
	    bool operator>(Fixed const &f) const; //greater than operator
	    bool operator<(Fixed const &f) const; //less than operator
	    bool operator>=(Fixed const &f) const; //greater than or equal operator
	    bool operator<=(Fixed const &f) const; //less than or equal operator
	    bool operator==(Fixed const &f) const; //equal operator
	    bool operator!=(Fixed const &f) const; //not equal operator
	    Fixed operator+(Fixed const &f) const; //addition operator
	    Fixed operator-(Fixed const &f) const; //subtraction operator
	    Fixed operator*(Fixed const &f) const; //multiplication operator
	    Fixed operator/(Fixed const &f) const; //division operator
	    Fixed &operator++(); //prefix increment operator
	    Fixed operator++(int); //postfix increment operator
	    Fixed &operator--(); //prefix decrement operator
	    Fixed operator--(int); //postfix decrement operator
	    static Fixed &min(Fixed &f1, Fixed &f2); //static member function to find the minimum of two Fixed values
	    static Fixed &max(Fixed &f1, Fixed &f2); //static member function to find the maximum of two Fixed values
	    static Fixed const &min(Fixed const &f1, Fixed const &f2); //static member function to find the minimum of two Fixed values
	    static Fixed const &max(Fixed const &f1, Fixed const &f2); //static member function to find the maximum of two Fixed values
};

std::ostream &operator<<(std::ostream &out, Fixed const &f); //output stream operator overload to print Fixed values.

#endif
