/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 00:27:16 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/22 07:53:52 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(){
	ScavTrap scav("tarzan");
	scav.attack("jane");
	scav.takeDamage(30);
	scav.beRepaired(20);
	scav.guardGate();
	return 0;
}
