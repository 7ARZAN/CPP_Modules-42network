/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 06:41:44 by elakhfif          #+#    #+#             */
/*   Updated: 2024/02/07 23:24:45 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(){
	Zombie *zombie = newZombie("tarzan");
	zombie->announce();
	randomChump("jane");
	delete zombie;
	//system("leaks Zombie");
	return (0);
}
