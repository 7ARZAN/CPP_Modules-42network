/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:57:42 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/11 22:06:15 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
	std::string _name;
    public:
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();
	void announce();
	void set_name(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
