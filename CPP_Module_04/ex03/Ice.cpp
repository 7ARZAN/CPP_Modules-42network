/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 05:37:46 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/05 08:11:31 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice(): AMateria("ice"){
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const & src): AMateria(src){
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice(){
	std::cout << "Ice destructor called" << std::endl;
}

Ice&	Ice::operator=(Ice const & rhs){
	if (this != &rhs)
		this->_type = rhs._type;
	std::cout << "Ice assignation operator called" << std::endl;
	return (*this);
}

AMateria*	Ice::clone() const{
	std::cout << "Ice clone called" << std::endl;
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
