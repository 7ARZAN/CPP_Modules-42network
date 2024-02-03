/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:24:14 by elakhfif          #+#    #+#             */
/*   Updated: 2024/02/03 08:22:03 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template	<typename T>

void	swap(T &a, T &b){
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template	<typename T>

T		&min(T &a, T &b){
	return (a < b ? a : b);
}

template	<typename T>

T		&max(T &a, T &b){
	return (a > b ? a : b);
}

#endif
