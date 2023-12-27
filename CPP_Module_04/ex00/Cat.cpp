/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 10:22:18 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/27 11:57:07 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	this->_type = "Cat";
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
	std::cout << "Cat Destructor called" << std::endl;
}
