/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 00:38:46 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/21 00:55:31 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const name): ClapTrap(name)
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &f): ClapTrap(f)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &f)
{
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    if (this != &f)
    {
	this->_name = f._name;
	this->_hit_points = f._hit_points;
	this->_energy_points = f._energy_points;
	this->_attack_damage = f._attack_damage;
    }
    return (*this);
}
void    ScavTrap::attack(const std::string& target){
	if (this->_hit_points == 0){
		std::cout << "ScavTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	else if (this->_energy_points == 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy points!" << std::endl;
		return ;
	}
	else{
		std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
}

void    ScavTrap::takeDamage(unsigned int amount){
	if (this->_hit_points == 0){
		std::cout << "ScavTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	else if (this->_hit_points <= amount)
	{
		std::cout << "ScavTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
		this->_hit_points = 0;
		std::cout << "ScavTrap " << this->_name << " is dead!" << std::endl;
	}
	else{
		std::cout << "ScavTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
		this->_hit_points -= amount;
	}
}

void    ScavTrap::beRepaired(unsigned int amount){
	if (this->_hit_points == 0){
		std::cout << "ScavTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	else if (this->_hit_points + amount >= 100)
	{
		std::cout << "ScavTrap " << this->_name << " be repaired " << amount << " points of damage!" << std::endl;
		this->_hit_points = 100;
		this->_energy_points--;
		std::cout << "ScavTrap " << this->_name << " is full health!" << std::endl;
	}
	else{
		std::cout << "ScavTrap " << this->_name << " be repaired " << amount << " points of damage!" << std::endl;
		this->_hit_points += amount;
		this->_energy_points--;
	}
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target){
	std::string challenges[5] = {"challenge1", "challenge2", "challenge3", "challenge4", "challenge5"};
	std::cout << "ScavTrap " << this->_name << " challenges " << target << " with " << challenges[rand() % 5] << std::endl;
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->_name << " has enterred in Gate keeper mode" << std::endl;
}
