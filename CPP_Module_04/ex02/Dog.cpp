/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 10:22:49 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/31 16:20:27 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(){
	this->_type = "Dog";
	this->brain = new Brain();
	this->brain->set_ideas(0, "ALA MAT7M9NICH");
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
	delete this->brain;
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound() const{
	std::cout << "Dog sound: Woof Woof" << std::endl;
}
