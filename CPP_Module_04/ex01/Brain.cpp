/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:24:56 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/28 16:32:24 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain(){
	int	i = -1;
	while (++i < 100)
		this->ideas[i] = "idea num: " + std::to_string(rand() % 100);
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::identify() const{
	std::stringstream ss;
	ss << this;
	return ss.str();
}

void Brain::set_ideas(int i, std::string idea){
	this->ideas[i] = idea;
}

std::string Brain::get_ideas(int i) const{
	return this->ideas[i];
}
