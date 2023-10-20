/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 06:33:03 by elakhfif          #+#    #+#             */
/*   Updated: 2023/10/20 06:41:39 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie destroyed" << std::endl;
}

void    Zombie::announce()
{
    std::cout << "<" << this->_name << " (" << this->_type << ")> BraiiiiiiinnnzzzZ..." << std::endl;
}
