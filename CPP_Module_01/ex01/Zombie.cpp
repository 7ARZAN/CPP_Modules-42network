/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:56:54 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/11 22:27:20 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	this->_name = "default";
}

Zombie::~Zombie(){
	std::cout << this->_name << " is dead" << std::endl;
}

void    Zombie::announce(){
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

//random_name (std::string &name) function to generate a random name for the zombie
void    random_name(std::string &name){
	std::string names[10] = {"tarzan", "libi", "lmongol", "lelouch", "batman", "forker", "l amir na2im", "khraybga", "tass", "3bi9a"};
	srand(time(NULL) + rand());
	int i = rand() % 10;
	name = names[i];
}

//rename (std::string &name) function to change the name of the zombie
void   rename(std::string &name){
	random_name(name);
}

//set_name (std::string name) function to set the name of the zombie
void    Zombie::set_name(std::string name){
	rename(name);
	this->_name = name;
}
