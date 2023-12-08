/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 00:07:57 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/09 00:09:42 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
	int                 _fixed_point_value;
	static const int    _fractional_bits = 8;
    public:
	Fixed();
	Fixed(Fixed const &f);
	Fixed(int const i);
	Fixed(float const f);
	~Fixed();
	Fixed &operator=(Fixed const &f);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &f);

#endif
