/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 00:38:46 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/09 00:45:50 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const name)
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->_name = name;
    this->_hit_points = 100;
    this->_max_hit_points = 100;
    this->_energy_points = 50;
    this->_max_energy_points = 50;
    this->_level = 1;
    this->_melee_attack_damage = 20;
    this->_ranged_attack_damage = 15;
    this->_armor_damage_reduction = 3;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &f)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = f;
}


ScavTrap &ScavTrap::operator=(ScavTrap const &f)
{
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    this->_name = f._name;
    this->_hit_points = f._hit_points;
    this->_max_hit_points = f._max_hit_points;
    this->_energy_points = f._energy_points;
    this->_max_energy_points = f._max_energy_points;
    this->_level = f._level;
    this->_melee_attack_damage = f._melee_attack_damage;
    this->_ranged_attack_damage = f._ranged_attack_damage;
    this->_armor_damage_reduction = f._armor_damage_reduction;
    return (*this);
}

void        ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << "ScavTrap " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_attack_damage << " points of damage !" << std::endl;
}

void        ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << "ScavTrap " << this->_name << " attacks " << target << " at melee, causing " << this->_melee_attack_damage << " points of damage !" << std::endl;
}

void        ScavTrap::takeDamage(unsigned int amount)
{
    if ((int)amount <= this->_armor_damage_reduction)
	std::cout << "ScavTrap " << this->_name << " take no damage" << std::endl;
    else if ((int)amount - this->_armor_damage_reduction > this->_hit_points)
    {
	this->_hit_points = 0;
	std::cout << "ScavTrap " << this->_name << " take " << amount - this->_armor_damage_reduction << " points of damage !" << std::endl;
	std::cout << "ScavTrap " << this->_name << " is dead" << std::endl;
    }
    else
    {
	this->_hit_points -= amount - this->_armor_damage_reduction;
	std::cout << "ScavTrap " << this->_name << " take " << amount - this->_armor_damage_reduction << " points of damage !" << std::endl;
    }
}

void        ScavTrap::beRepaired(unsigned int amount)
{
    if ((int)amount + this->_hit_points > this->_max_hit_points)
    {
	this->_hit_points = this->_max_hit_points;
	std::cout << "ScavTrap " << this->_name << " is fully repaired" << std::endl;
    }
    else
    {
	this->_hit_points += amount;
	std::cout << "ScavTrap " << this->_name << " is repaired by " << amount << " points" << std::endl;
    }
}

void        ScavTrap::challengeNewcomer(std::string const &target)
{
    std::string challenges[5] = {"challenge1", "challenge2", "challenge3", "challenge4", "challenge5"};
    int i = rand() % 5;
    std::cout << "ScavTrap " << this->_name << " challenges " << target << " with " << challenges[i] << std::endl;
}

std::string ScavTrap::get_name() const
{
    return (this->_name);
}

int         ScavTrap::get_melee_attack_damage() const
{
    return (this->_melee_attack_damage);
}

int         ScavTrap::get_ranged_attack_damage() const
{
    return (this->_ranged_attack_damage);
}

int         ScavTrap::get_armor_damage_reduction() const
{
    return (this->_armor_damage_reduction);
}

int         ScavTrap::get_hit_points() const
{
    return (this->_hit_points);
}

int         ScavTrap::get_max_hit_points() const
{
    return (this->_max_hit_points);
}

int         ScavTrap::get_energy_points() const
{
    return (this->_energy_points);
}

int         ScavTrap::get_max_energy_points() const
{
    return (this->_max_energy_points);
}

int         ScavTrap::get_level() const
{
    return (this->_level);
}
