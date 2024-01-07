/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 05:28:22 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/05 08:10:56 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(): AMateria("cure"){
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const& src): AMateria(src){
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure(){
	std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(Cure const& src){
	AMateria::operator=(src);
	std::cout << "Cure assignation operator called" << std::endl;
	return *this;
}

Cure::Cure(std::string const& type): AMateria(type){
	std::cout << "Cure constructor called" << std::endl;
	this->_type = type;
}

AMateria*	Cure::clone() const{
	std::cout << "Cure clone called" << std::endl;
	return new Cure(*this);
}

void	Cure::use(ICharacter& target){
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

