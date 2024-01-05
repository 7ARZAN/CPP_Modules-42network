/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 05:28:22 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/05 05:37:30 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(): AMateria("cure"){}

Cure::Cure(Cure const& src): AMateria(src){}

Cure::~Cure(){}

Cure& Cure::operator=(Cure const& src){
	AMateria::operator=(src);
	return *this;
}

Cure::Cure(std::string const& type): AMateria(type){
	this->_type = type;
}

AMateria*	Cure::clone() const{
	return new Cure(*this);
}

void	Cure::use(ICharacter& target){
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

