/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 02:22:21 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/22 05:23:42 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string const name);
		FragTrap(FragTrap const &f);
		FragTrap &operator=(FragTrap const &f);
		~FragTrap();
		void	highFivesGuys(void);
};

#endif
