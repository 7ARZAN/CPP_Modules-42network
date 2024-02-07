/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:24:14 by elakhfif          #+#    #+#             */
/*   Updated: 2024/02/07 01:09:13 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template	<typename T>

void	iter(T *array, int size, void (*f)(T const&)){
	for (int i = 0; i < size; i++)
		f(array[i]);
}

template	<typename T>

void	add(T const &x){
	if (x + 1)
		std::cout << "The result of adding 1 to " << x << " is: " << x + 1 << std::endl;
	else
		std::cout << "Error: Can't add 1 to this type" << std::endl;
}

template	<typename T>

void	print(T const &x){
	std::cout << x << std::endl;
}

#endif
