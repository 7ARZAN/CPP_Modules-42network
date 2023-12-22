/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 00:38:46 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/22 07:52:09 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_name = "ScavTrap";
	this->_energy_points = 50;
    std::cout << "ScavTrap Default constructor called !!" << std::endl;
}

ScavTrap::ScavTrap(std::string const name){
	std::cout << "ScavTrap Parametric constructor called !!" << std::endl;
	this->_name = name;
	this->_energy_points = 50;
}

ScavTrap::ScavTrap(ScavTrap const &f){
	std::cout << "ScavTrap Copy constructor called !!" << std::endl;
		this->_name = f._name;
		this->_energy_points = 50;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &f){
	std::cout << "ScavTrap Assignation operator called !!" << std::endl;
	if (this != &f){
		this->_name = f._name;
		this->_energy_points = f._energy_points;
	}
	return (*this);
}
void    ScavTrap::attack(const std::string& target){
	if (this->_hit_points == 0){
		std::cout << "ScavTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	else if (this->_energy_points == 0){
		std::cout << "ScavTrap " << this->_name << " has no energy points!" << std::endl;
		return ;
	}
	else{
		std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap Destructor called !!" << std::endl;
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->_name << " has enterred in Gate keeper mode" << std::endl;
}
