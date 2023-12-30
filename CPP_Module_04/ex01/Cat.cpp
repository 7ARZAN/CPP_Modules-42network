/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 10:22:18 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/30 01:35:49 by elakhfif         ###   ########.fr       */
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

Cat& Cat::operator=(Cat const& src){
	std::cout << "Cat Assignation operator called" << std::endl;
	std::cout << this << " Ha Anaya" << std::endl;
	if (this != &src)
		this->_type = src._type;
	std::cout << this << " Ha Anaya" << std::endl;
	return *this;
}

Cat::~Cat(){
	delete this->brain;
	std::cout << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound() const{
	std::cout << "Cat sound: Meow Meow" << std::endl;
}
