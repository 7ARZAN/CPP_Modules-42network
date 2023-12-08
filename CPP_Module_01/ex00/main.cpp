/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 06:41:44 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/08 16:11:39 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int	i;

	i = -1;
	Zombie *zombie = newZombie("tarzan");
	zombie->announce();
	randomChump("jane");
	delete zombie;
	return (0);
}
