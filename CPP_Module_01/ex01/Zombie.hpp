/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:35:52 by elakhfif          #+#    #+#             */
/*   Updated: 2023/10/22 14:37:42 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	std::string _name;
	public:
		Zombie();
		~Zombie();
		void announce();
		void set_name(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
