/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 00:27:16 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/20 08:24:17 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(){
	ClapTrap a("tarzan");
	ClapTrap b("jane");
	ClapTrap c(a);
	ClapTrap d;

	d = b;
	a.attack("jane");
	b.takeDamage(5);
	b.beRepaired(5);
	return 0;
}
