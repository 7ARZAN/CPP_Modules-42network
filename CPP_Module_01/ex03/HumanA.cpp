/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 03:35:27 by elakhfif          #+#    #+#             */
/*   Updated: 2024/12/25 17:23:52 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon){
	this->_name = name;
	this->_weapon = weapon;
	std::cout << "HumanA created" << std::endl;
}

HumanA::~HumanA(){
	std::cout << "HumanA destroyed" << std::endl;
}

void	HumanA::attack(){
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
