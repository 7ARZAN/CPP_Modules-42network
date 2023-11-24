/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 06:41:44 by elakhfif          #+#    #+#             */
/*   Updated: 2023/11/24 02:18:13 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int	i;

	i = -1;
	Zombie *zombie = newZombie("tarzan");
	while (++i < 3)
		zombie->announce();
	randomChump("jane");
	delete zombie;
	return (0);
}
