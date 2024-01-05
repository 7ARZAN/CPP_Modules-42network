/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 10:22:18 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/04 19:30:11 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(){
	this->_type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(Cat const& src){
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = src;
}

Cat::Cat(Brain *brain){
	this->brain = new Brain(*brain);
	std::cout << "Cat Parametric Constructor called" << std::endl;
}


Cat& Cat::operator=(Cat const& src){
	std::cout << "Cat Assignation operator called" << std::endl;
	if (this != &src){

		this->_type = src._type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*src.brain);
	}
	return *this;
}

Cat::~Cat(){
	if(this->brain)
		delete this->brain;
	std::cout << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound() const{
	std::cout << "Cat sound: Meow Meow" << std::endl;
}
