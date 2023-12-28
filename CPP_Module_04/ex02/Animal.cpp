/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 10:23:20 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/28 16:41:37 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(): _type("Animal"){
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(Animal const& src){
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = src;
}

Animal& Animal::operator=(Animal const& src){
	std::cout << "Animal Assignation operator called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}

Animal::~Animal(){
	std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType() const{
	return this->_type;
}

void	Animal::makeSound() const{
	std::cout << "Animal makeSound called" << std::endl;
}
