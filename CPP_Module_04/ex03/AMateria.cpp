/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 03:56:22 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/05 07:30:50 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
	this->_type = "default";
}

AMateria::AMateria(std::string const &type){
	this->_type = type;
}

std::string const &AMateria::getType() const{
	return this->_type;
}

void AMateria::use(ICharacter &target){
	(void)target; // to avoid the warning
}

AMateria::AMateria(AMateria const &src){
	*this = src;
}

AMateria &AMateria::operator=(AMateria const &rhs){
	this->_type = rhs._type;
	return *this;
}

AMateria::~AMateria(){}
