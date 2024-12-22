/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 05:37:43 by elakhfif          #+#    #+#             */
/*   Updated: 2024/12/22 16:58:08 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): FragTrap(_hit_points), ScavTrap(_energy_points, _attack_damage){
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->_name = "DT__";
}

DiamondTrap::DiamondTrap(std::string name): FragTrap(_hit_points), ScavTrap(_energy_points, _attack_damage){
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_name = name;
	FragTrap::_hit_points = _hit_points;
	ScavTrap::_energy_points = _energy_points;
	ScavTrap::_attack_damage = _attack_damage;
	ClapTrap::_name = name + "__clap_name";
}

DiamondTrap::DiamondTrap(DiamondTrap const &d): ClapTrap(d._name + "__clap_name"){
	*this = d;
	std::cout << "DiamondTrap Copy Constructor Called" << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap Destructor Called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &d){
	this->_name = d._name;
	FragTrap::_hit_points = d.FragTrap::_hit_points;
	ScavTrap::_energy_points = d.ScavTrap::_energy_points;
	ScavTrap::_attack_damage = d.ScavTrap::_attack_damage;
	std::cout << "DiamondTrap Assignation Operator Called" << std::endl;
	return *this;
}

void    DiamondTrap::whoAmI(){
	std::cout << "DiamondTrap name is " << this->_name << " and ClapTrap name is " << ClapTrap::_name << std::endl;
}

