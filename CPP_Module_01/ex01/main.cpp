/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:44:27 by elakhfif          #+#    #+#             */
/*   Updated: 2023/10/22 14:46:13 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie;
    int i;

    i = 0;
    zombie = zombieHorde(10, "Tarzan");
    while (i < 10)
    {
	zombie[i].announce();
	i++;
    }
    delete[] zombie;
    return (0);
}
