/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:37:51 by elakhfif          #+#    #+#             */
/*   Updated: 2023/10/22 14:44:20 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    this->_name = this->_name + std::to_string(rand() % 100);
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->_name << " is dead" << std::endl;
}

void    Zombie::announce()
{
    std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string name)
{
    this->_name = name;
}

//what the fuck i should doooo here ?
