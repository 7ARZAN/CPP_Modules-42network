/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 05:38:17 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/21 05:50:53 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap: public FragTrap, public ScavTrap{
	private:
		std::string	_name; //from ClapTrap
		int			_hit_points; //from FragTrap
		int			_energy_points; //from ScavTrap
		int			_attack_damage; //from FragTrap
	public:
		DiamondTrap();
		DiamondTrap(std::string const name);
		DiamondTrap(DiamondTrap const &d);
		~DiamondTrap();
		DiamondTrap &operator=(DiamondTrap const &d);
		//void	whoAmI();
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

};

#endif
