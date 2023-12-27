/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:24:56 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/27 13:26:47 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain(){
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::identify() const{
	std::stringstream ss; // create a stringstream!
	ss << this;
	return ss.str();
}
