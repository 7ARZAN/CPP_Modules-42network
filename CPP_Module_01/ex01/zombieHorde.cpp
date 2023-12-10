/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:57:27 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/10 22:57:56 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N < 1)
		return (NULL);
	Zombie *zombies = new Zombie[N];
	for (int i = 0; i < N; i++){
		zombies[i].set_name(name);
		zombies[i].announce();
	}
	return (zombies);
}
