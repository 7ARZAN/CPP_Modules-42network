/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 00:28:52 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/24 06:51:27 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	this->_name = "CT__";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	std::cout << "ClapTrap Default constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& ClapTrap){
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = ClapTrap;
}

ClapTrap &ClapTrap::operator=(ClapTrap const& ClapTrap){
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->_name = ClapTrap._name;
	this->_hit_points = ClapTrap._hit_points;
	this->_energy_points = ClapTrap._energy_points;
	this->_attack_damage = ClapTrap._attack_damage;
	return *this;
}

void    ClapTrap::attack(const std::string& target){
	if (this->_hit_points == 0){
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	else if (this->_energy_points == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points!" << std::endl;
		return ;
	}
	else{
		std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
}

void    ClapTrap::takeDamage(unsigned int amount){
	if (this->_hit_points == 0){
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	else if (this->_hit_points <= amount)
	{
		std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
		this->_hit_points = 0;
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
	}
	else{
		std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
		this->_hit_points -= amount;
	}
}

void    ClapTrap::beRepaired(unsigned int amount){
	if (this->_hit_points == 0){
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	else if (this->_hit_points + amount >= 10)
	{
		std::cout << "ClapTrap " << this->_name << " be repaired " << amount << " points of damage!" << std::endl;
		this->_hit_points = 10;
		this->_energy_points--;
		std::cout << "ClapTrap " << this->_name << " is full health!" << std::endl;
	}
	else{
		std::cout << "ClapTrap " << this->_name << " be repaired " << amount << " points of damage!" << std::endl;
		this->_hit_points += amount;
		this->_energy_points--;
	}
}
