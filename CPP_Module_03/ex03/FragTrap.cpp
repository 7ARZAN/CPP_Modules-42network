/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 02:28:12 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/28 16:15:57 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	this->_name = "FT__";
	this->_hit_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap Default Constructor Called !" << std::endl;
}

FragTrap::FragTrap(std::string const name){
	std::cout << "FragTrap Copy Constructor Called !" << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_attack_damage = 30;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor Called !" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &f){
	std::cout << "FragTrap Assignation operator called !" << std::endl;
	if (this != &f){
		this->_name = f._name;
		this->_attack_damage = f._attack_damage;
	}
	return (*this);
}

FragTrap::FragTrap(FragTrap const &f){
	std::cout << "FragTrap Copy Constructor Called !" << std::endl;
	this->_name = f._name;
	this->_hit_points = 100;
	this->_attack_damage = 30;
	*this = f;
}

void	FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << this->_name << " wants to high five you !" << std::endl;
}
