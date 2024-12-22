/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 02:28:12 by elakhfif          #+#    #+#             */
/*   Updated: 2024/12/22 16:52:15 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	this->_name = "FT__";
	this->_hit_points = 100;
	this->_attack_damage = 30;
	this->_energy_points = 100;
	std::cout << "FragTrap Default Constructor Called !" << std::endl;
}

FragTrap::FragTrap(unsigned int AttackDamage){
	AttackDamage = 30;
	this->_attack_damage = AttackDamage;
	std::cout << "FragTrap Default Constructor Called !" << std::endl;
}

FragTrap::FragTrap(std::string const name){
	this->_name = name;
	this->_hit_points = 100;
	this->_attack_damage = 30;
	this->_energy_points = 100;
	std::cout << "FragTrap Copy Constructor Called !" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor Called !" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &f){
	if (this != &f)
		*this = f;
	std::cout << "FragTrap Assignation Operator Called !" << std::endl;
	return (*this);
}

FragTrap::FragTrap(FragTrap const &f){
	std::cout << "FragTrap Copy Constructor Called !" << std::endl;
	*this = f;
}

void	FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << this->_name << " wants to high five you !" << std::endl;
}
