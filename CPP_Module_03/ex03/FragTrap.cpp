/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 02:28:12 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/21 05:35:03 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	std::cout << "FragTrap Default Constructor Called !" << std::endl;
}

FragTrap::FragTrap(std::string const name):ClapTrap(name){
	std::cout << "FragTrap Copy Constructor Called !" << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor Called !" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &f){
	std::cout << "FragTrap Assignation operator called" << std::endl;
	if (this != &f)
	{
		this->_name = f._name;
		this->_hit_points = f._hit_points;
		this->_energy_points = f._energy_points;
		this->_attack_damage = f._attack_damage;
	}
	return (*this);
}

FragTrap::FragTrap(FragTrap const &f):ClapTrap(f._name){
	std::cout << "FragTrap Copy Constructor Called !" << std::endl;
	*this = f;
}

void    FragTrap::attack(const std::string& target){
	if (this->_hit_points == 0){
		std::cout << "FragTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	else if (this->_energy_points == 0)
	{
		std::cout << "FragTrap " << this->_name << " has no energy points!" << std::endl;
		return ;
	}
	else{
		std::cout << "FragTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
}

void    FragTrap::takeDamage(unsigned int amount){
	if (this->_hit_points == 0){
		std::cout << "FragTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	else if (this->_hit_points <= amount)
	{
		std::cout << "FragTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
		this->_hit_points = 0;
		std::cout << "FragTrap " << this->_name << " is dead!" << std::endl;
	}
	else{
		std::cout << "FragTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
		this->_hit_points -= amount;
	}
}

void    FragTrap::beRepaired(unsigned int amount){
	if (this->_hit_points == 0){
		std::cout << "FragTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	else if (this->_hit_points + amount >= 100)
	{
		std::cout << "FragTrap " << this->_name << " be repaired " << amount << " points of damage!" << std::endl;
		this->_hit_points = 100;
		this->_energy_points--;
		std::cout << "FragTrap " << this->_name << " is full health!" << std::endl;
	}
	else{
		std::cout << "FragTrap " << this->_name << " be repaired " << amount << " points of damage!" << std::endl;
		this->_hit_points += amount;
		this->_energy_points--;
	}
}

void	FragTrap::highFivesGuys(){
	std::cout << " Your palm and my palm create the best moment together when they go for a high five! " << std::endl;
}
