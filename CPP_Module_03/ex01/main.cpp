/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 00:27:16 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/21 00:56:54 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(){
	ScavTrap scav("tarzan");
	ScavTrap scav2(scav);
	ScavTrap scav3("jane");

	scav2 = scav3;
	scav.attack("jane");
	scav.takeDamage(30);
	scav.beRepaired(20);
	scav.challengeNewcomer("jane");
	scav.guardGate();
	return 0;
}
