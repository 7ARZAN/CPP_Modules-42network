/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 08:26:32 by elakhfif          #+#    #+#             */
/*   Updated: 2024/12/22 16:42:47 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public virtual ClapTrap{
	public:
		ScavTrap();
		ScavTrap(unsigned int HitPoints, unsigned int EnergyPoints);
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &f);
		ScavTrap &operator=(ScavTrap const &f);
		~ScavTrap();
		void	attack(std::string const & target);
		void	guardGate();
};

#endif
