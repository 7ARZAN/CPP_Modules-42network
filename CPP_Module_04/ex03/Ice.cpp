/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 05:37:46 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/05 05:43:09 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice(): AMateria("ice"){}

Ice::Ice(Ice const & src): AMateria(src){}

Ice::~Ice(){}

Ice&	Ice::operator=(Ice const & rhs){
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

AMateria*	Ice::clone() const{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
