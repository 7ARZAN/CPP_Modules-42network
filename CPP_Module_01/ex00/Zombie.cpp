/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 06:33:03 by elakhfif          #+#    #+#             */
/*   Updated: 2023/11/24 02:13:26 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
    std::cout << this->_name <<"Zombie destroyed" << std::endl;
}

void    Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
