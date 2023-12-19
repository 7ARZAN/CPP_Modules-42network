/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 00:24:35 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/19 01:22:53 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(){
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);
	Point point(45, 45);
	if (bsp(a, b, c, point))
		std::cout << "Point is inside the triangle" << std::endl;
	else
		std::cout << "Point is outside the triangle" << std::endl;
	return (0);
}
