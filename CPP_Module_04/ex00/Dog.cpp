/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 10:22:49 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/27 12:18:30 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(){
	this->_type = "Dog";
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(Dog const& src){
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = src;
}

Dog& Dog::operator=(Dog const& src){
	std::cout << "Dog Assignation operator called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}

Dog::~Dog(){
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound() const{
	std::cout << "Dog sound: Woof Woof" << std::endl;
}
