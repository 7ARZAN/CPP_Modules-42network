/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 05:37:43 by elakhfif          #+#    #+#             */
/*   Updated: 2024/12/22 15:35:38 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	ScavTrap	s;
	FragTrap	f;

	std::cout << "DiamondTrap Default Constructor Called" << std::endl;
	this->_name = "DT__";
	this->_hit_points = f.getHitPoints();
	this->_energy_points = s.getEnergyPoints();
	this->_attack_damage = f.getAttackDamage();
}

DiamondTrap::DiamondTrap(std::string name){
	ScavTrap	s;
	FragTrap	f;

	std::cout << "DiamondTrap Constructor Called" << std::endl;
	this->_name = name;
	ClapTrap::_name = name + "__clap_name";
	this->_hit_points = f.getHitPoints();
	this->_energy_points = s.getEnergyPoints();
	this->_attack_damage = f.getAttackDamage();
}

DiamondTrap::DiamondTrap(DiamondTrap const &d): ClapTrap(d._name + "__clap_name"){
	std::cout << "DiamondTrap Copy Constructor Called" << std::endl;
	*this = d;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap Destructor Called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &d){
	std::cout << "DiamondTrap Assignation Operator Called" << std::endl;
	this->_name = d._name;
	this->_hit_points = d._hit_points;
	this->_energy_points = d._energy_points;
	this->_attack_damage = d._attack_damage;
	return *this;
}

void    DiamondTrap::whoAmI(){
	std::cout << "DiamondTrap name is " << this->_name << " and ClapTrap name is " << ClapTrap::_name << std::endl;
}

