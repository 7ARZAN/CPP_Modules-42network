/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:56:54 by elakhfif          #+#    #+#             */
/*   Updated: 2024/12/25 17:22:30 by elakhfif         ###   ########.fr       */
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

void    random_name(std::string &name){
	std::string	names[10] = {"tarzan", "libi", "lmongol", "lelouch", "batman", "forker", "l amir na2im", "khraybga", "tass", "3bi9a"};
	int		i;
	
	i = rand() % 10;
	srand(time(NULL) + rand());
	name = names[i];
}

void   rename(std::string &name){
	random_name(name);
}

void    Zombie::set_name(std::string name){
	rename(name);
	this->_name = name;
}
