/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 00:40:06 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/09 00:42:21 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include <cstdlib>

class ScavTrap
{
	private:
   	 	int         _hit_points;
   		int         _max_hit_points;
    		int         _energy_points;
    		int         _max_energy_points;
    		int         _level;
    		std::string _name;
    		int         _melee_attack_damage;
    		int         _ranged_attack_damage;
    		int         _armor_damage_reduction;
	public:
    		ScavTrap();
    		ScavTrap(std::string const name);
    		ScavTrap(ScavTrap const &f);
    		ScavTrap &operator=(ScavTrap const &f);
    		~ScavTrap();
    		void        rangedAttack(std::string const &target);
    		void        meleeAttack(std::string const &target);
    		void        takeDamage(unsigned int amount);
    		void        beRepaired(unsigned int amount);
    		void        challengeNewcomer(std::string const &target);
    		std::string get_name() const;
    		int         get_melee_attack_damage() const;
    		int         get_ranged_attack_damage() const;
    		int         get_hit_points() const;
    		int         get_max_hit_points() const;
    		int         get_energy_points() const;
    		int         get_max_energy_points() const;
    		int         get_level() const;
    		int         get_armor_damage_reduction() const;
};

#endif
