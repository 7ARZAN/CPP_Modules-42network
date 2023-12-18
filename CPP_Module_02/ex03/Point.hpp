/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 00:23:14 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/18 07:58:49 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point{
	private:
		Fixed const x; 
		Fixed const y;
	public:
		Point();
		Point(Point const &);
		Point(float const, float const);
		~Point();
		Point &operator=(Point const &);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
