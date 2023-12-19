/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 00:24:57 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/19 00:30:26 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0){}

Point::Point(float const x, float const y): x(x), y(y){}

Point::Point(Point const &p): x(p.x), y(p.y){}

Point&	Point::operator=(Point const &p){
	if (this != &p)
		*this = p;
	return (*this);
}

Point::~Point(){}

Fixed Point::getX() const{
	return (this->x);
}

Fixed Point::getY() const{
	return (this->y);
}
