/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 05:37:43 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/21 07:18:09 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Default_name"), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
    this->_hit_points = FragTrap::_hit_points;
    this->_energy_points = ScavTrap::_energy_points;
    this->_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "__clap_name"), ScavTrap(name), FragTrap(name)
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->_name = name;
    this->_hit_points = FragTrap::_hit_points;
    this->_energy_points = ScavTrap::_energy_points;
    this->_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(DiamondTrap const &d): ClapTrap(d._name + "__clap_name")
{
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    *this = d;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &d)
{
    std::cout << "DiamondTrap Assignation operator called" << std::endl;
    this->_name = d._name;
    this->_hit_points = d._hit_points;
    this->_energy_points = d._energy_points;
    this->_attack_damage = d._attack_damage;
    return *this;
}

void    DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void    DiamondTrap::takeDamage(unsigned int amount)
{
	FragTrap::takeDamage(amount);
}

void    DiamondTrap::beRepaired(unsigned int amount)
{
	ScavTrap::beRepaired(amount);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is " << this->_name << " and ClapTrap name is " << ClapTrap::_name << std::endl;
}

