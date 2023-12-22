/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 05:38:17 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/22 04:42:39 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap: public FragTrap, public ScavTrap{
	private:
		std::string	_name; 
		int		_hit_points; 
		int		_energy_points; 
		int		_attack_damage; 
	public:
		DiamondTrap();
		DiamondTrap(const std::string name);
		DiamondTrap(const DiamondTrap &d);
		~DiamondTrap();
		DiamondTrap &operator=(const DiamondTrap &d);
		void	whoAmI();
		// void	attack(std::string const &target);
		// void	takeDamage(unsigned int amount);
		// void	beRepaired(unsigned int amount);

};

#endif
