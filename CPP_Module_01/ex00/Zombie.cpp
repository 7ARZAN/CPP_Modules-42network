/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 06:33:03 by elakhfif          #+#    #+#             */
/*   Updated: 2024/02/07 23:24:39 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	this->_name = name;
}

Zombie::~Zombie(){
    std::cout << this->_name << " is dead" << std::endl;
}

void    Zombie::announce(){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
