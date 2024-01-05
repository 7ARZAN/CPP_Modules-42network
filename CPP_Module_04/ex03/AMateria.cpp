/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 03:56:22 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/05 08:13:42 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(){
	this->_type = "default";
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type){
	this->_type = type;
	std::cout << "AMateria constructor called" << std::endl;
}

std::string const &AMateria::getType() const{
	return this->_type;
	std::cout << "AMateria getType called" << std::endl;
}

void AMateria::use(ICharacter &target){
	(void)target; // to avoid the warning
}

AMateria::AMateria(AMateria const &src){
	*this = src;
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs){
	this->_type = rhs._type;
	std::cout << "AMateria assignation operator called" << std::endl;
	return *this;
}

AMateria::~AMateria(){
	std::cout << "AMateria destructor called" << std::endl;
}
