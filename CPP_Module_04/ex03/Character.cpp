/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 04:02:08 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/11 01:35:18 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(){
	this->_name = "default";
	this->_count = -1;
	for (int i = 0; i < 4; i++){
		this->_tmp[i] = NULL;
		this->_inventory[i] = NULL;
	}
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string const &name){
	this->_name = name;
	this->_count = -1;
	for (int i = 0; i < 4; i++){
		this->_tmp[i] = NULL;
		this->_inventory[i] = NULL;
	}
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(Character const &src){
	this->_count = -1;
	for (int i = 0; i < 4; i++){
		this->_tmp[i] = NULL;
		this->_inventory[i] = NULL;
	}
	*this = src;
	std::cout << "Character copy constructor called" << std::endl;
}

Character::~Character(){
	for (int i = 0; i < 4; i++){
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (this->_tmp[i])
			delete this->_tmp[i];
	}

	std::cout << "Character destructor called" << std::endl;
}

Character &Character::operator=(Character const& src){
	this->_name = src._name;
	this->_count = src._count;
	for (int i = 0; i < 4; i++)
		if (src._inventory[i])	
			this->_inventory[i] = src._inventory[i]->clone();
	std::cout << "Character assignation operator called" << std::endl;
	return *this;
}

std::string const &Character::getName() const{
	return this->_name;
}



void Character::equip(AMateria* m){
	if (!m)
		return ;
	this->_count++;
	if (this->_count >= 0 && this->_count <= 3)
		this->_inventory[this->_count] = m->clone();
	delete m;
}

void Character::unequip(int idx){
	if (idx < 0 || idx > 3)
		return ;
	if (_tmp[idx])
		delete (this->_tmp[idx]);
	this->_tmp[idx] = this->_inventory[idx];
	this->_inventory[idx] = NULL;
	this->_count--;
	//this->_inventory[this->_count] = NULL;
}

void Character::use(int idx, ICharacter& target){
	if (idx >= 0 && idx <= 3 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}

std::ostream &operator<<(std::ostream &o, Character const &rhs){
	o << rhs.getName();
	return o;
}
