/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 03:35:47 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/10 22:23:30 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	std::cout << "HumanB created" << std::endl;
	this->_weapon = NULL;
}

HumanB::~HumanB()
{
	std::cout << "HumanB destroyed" << std::endl;
}

void HumanB::attack()
{
	if (this->_weapon == NULL){
		std::cout << "Sergant " << this->_name << " have no weapon, RIP Bozo" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
