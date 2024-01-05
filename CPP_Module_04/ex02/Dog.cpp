/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 10:22:49 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/04 19:29:22 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(){
	this->_type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(Dog const& src){
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = src;
}

Dog::Dog(Brain *brain){
	this->brain = new Brain(*brain);
	std::cout << "Dog Parametric Constructor called" << std::endl;
}


Dog& Dog::operator=(Dog const& src){
	std::cout << "Dog Assignation operator called" << std::endl;
	if (this != &src){

		this->_type = src._type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*src.brain);
	}
	return *this;
}

Dog::~Dog(){
	if (this->brain)
		delete this->brain;
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound() const{
	std::cout << "Dog sound: Woof Woof" << std::endl;
}
