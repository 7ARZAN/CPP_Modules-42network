/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 00:27:16 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/09 00:44:16 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(){
	ScavTrap scav("scav");
	ScavTrap scav2(scav);
	ScavTrap scav3("scav3");
	scav3 = scav2;
	scav.rangedAttack("target");
	scav.meleeAttack("target");
	scav.takeDamage(10);
	scav.beRepaired(10);
	scav.challengeNewcomer("target");
	return 0;
}
