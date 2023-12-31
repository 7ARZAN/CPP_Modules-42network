/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 10:22:18 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/31 16:38:15 by elakhfif         ###   ########.fr       */
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
	if (this != &src)
		this->_type = src._type;
	return *this;
}

Cat::~Cat(){
	delete this->brain;
	std::cout << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound() const{
	std::cout << "Cat sound: Meow Meow" << std::endl;
}

// void	Cat::read_ideas() const{
// 	int	i;
//
// 	i = -1;
// 	for (i = 0; i < 100; i++)
// 		std::cout << this->brain->get_ideas(i) << " ZABA W CHTA SABA" << std::endl;
// }
