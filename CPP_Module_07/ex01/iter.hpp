/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:24:14 by elakhfif          #+#    #+#             */
/*   Updated: 2024/02/06 08:38:03 by elakhfif         ###   ########.fr       */
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

void	add(T *array){
	*array += 1;
}

template	<typename T>

void	print(T const &x){
	std::cout << x << std::endl;
}

#endif
