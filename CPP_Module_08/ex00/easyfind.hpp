/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:39:11 by tarzan            #+#    #+#             */
/*   Updated: 2024/08/01 21:34:42 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class NotFoundException : public std::exception{
	virtual const char* what() const throw(){
		return ("Did not find the value in the container.");
	}
};

template	<typename T>

int	easyfind(T &container, int value){
	typename T::iterator	it;

	it = std::find(container.begin(), container.end(), value);
	if ( it != container.end())
		return (*it);
	else
		throw NotFoundException();
}

#endif
