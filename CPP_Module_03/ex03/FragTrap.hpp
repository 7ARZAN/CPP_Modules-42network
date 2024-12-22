/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 02:22:21 by elakhfif          #+#    #+#             */
/*   Updated: 2024/12/22 16:39:14 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap{
	public:
		FragTrap();
		FragTrap(unsigned int AttackDamage);
		FragTrap(std::string const name);
		FragTrap(FragTrap const &f);
		FragTrap &operator=(FragTrap const &f);
		~FragTrap();
		void	highFivesGuys(void);
};

#endif
