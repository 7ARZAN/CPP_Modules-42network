/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:24:14 by elakhfif          #+#    #+#             */
/*   Updated: 2024/08/01 21:31:14 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template	<typename T>

void	iter(T *array, int size, void (*f)(T const&)){
	int	i;

	i = -1;
	while (++i < size)
		f(array[i]);
}

template	<typename T>

void	add(T const &x){
	if (x + 1)
		std::cout << "The result of adding 1 to " << x << " is: " << x + 1 << '\n';
	else
		std::cout << "Error: Can't add 1 to this type" << '\n';
}

template	<typename T>

void	print(T const &x){
	std::cout << x << '\n';
}

#endif
