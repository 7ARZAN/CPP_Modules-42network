/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 00:27:55 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/09 00:32:57 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
	std::string _name;
	int _hit_points;
	int _max_hit_points;
	int _energy_points;
	int _max_energy_points;
	int _level;
	int _attack_damage;
    public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &f);
	ClapTrap &operator=(ClapTrap const &f);
	~ClapTrap();
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
