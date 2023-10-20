/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 06:31:01 by elakhfif          #+#    #+#             */
/*   Updated: 2023/10/20 06:38:08 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	std::string _name;
	std::string _type;
public:
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();
	void announce();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
