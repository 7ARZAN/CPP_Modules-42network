/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 00:24:47 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/19 00:28:18 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point){
	float x = point.getX().toFloat();
	float y = point.getY().toFloat();
	float x1 = a.getX().toFloat();
	float y1 = a.getY().toFloat();
	float x2 = b.getX().toFloat();
	float y2 = b.getY().toFloat();
	float x3 = c.getX().toFloat();
	float y3 = c.getY().toFloat();
	float a1 = ((x - x1) * (y2 - y1)) - ((x2 - x1) * (y - y1));
	float a2 = ((x - x2) * (y3 - y2)) - ((x3 - x2) * (y - y2));
	float a3 = ((x - x3) * (y1 - y3)) - ((x1 - x3) * (y - y3));
	if ((a1 >= 0 && a2 >= 0 && a3 >= 0) || (a1 <= 0 && a2 <= 0 && a3 <= 0))
		return (true);
	return (false);
}
