/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 03:35:13 by elakhfif          #+#    #+#             */
/*   Updated: 2023/11/24 03:41:49 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) // : _type(type) is an initialization list and it's the best way to initialize attributes
{
	std::cout << "Weapon is created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon is destroyed" << std::endl;
}

std::string const &Weapon::getType() const
{
	return (this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}
