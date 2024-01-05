/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 04:02:08 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/05 08:02:11 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
	this->_name = "default";
	this->_count = -1;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string const &name){
	this->_name = name;
	this->_count = -1;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const &src){
	*this = src;
}

Character::~Character(){
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

Character &Character::operator=(Character const& src){
	this->_name = src._name;
	this->_count = src._count;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = src._inventory[i];
	return *this;
}

std::string const &Character::getName() const{
	return this->_name;
}



void Character::equip(AMateria* m){
	this->_count++;
	if (this->_count >= 0 && this->_count <= 3)
		this->_inventory[this->_count] = m;
	else
		this->_count = 3;
}

void Character::unequip(int idx){
	if (idx >= 0 && idx <= 3 && this->_inventory[idx])
		this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
	if (idx >= 0 && idx <= 3 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}

std::ostream &operator<<(std::ostream &o, Character const &rhs){
	o << rhs.getName();
	return o;
}
