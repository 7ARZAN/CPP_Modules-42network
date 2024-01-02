/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 10:23:20 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/02 22:25:27 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

AAnimal::AAnimal(): _type("AAnimal"){
	std::cout << "AAnimal Constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const& src){
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = src;
}

AAnimal& AAnimal::operator=(AAnimal const& src){
	std::cout << "AAnimal Assignation operator called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}

AAnimal::~AAnimal(){
	std::cout << "AAnimal Destructor called" << std::endl;
}

std::string AAnimal::getType() const{
	return this->_type;
}

void	AAnimal::makeSound() const{
	std::cout << "AAnimal makeSound called" << std::endl;
}

// void	Animal::read_ideas() const{
// 	std::cout << "I HAVE KHIKHI no brain found!" << std::endl;
// }
