/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 00:27:16 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/09 00:33:38 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(){
	ClapTrap a("elakhfif");
	ClapTrap b("elakhfif2");
	ClapTrap c(a);
	ClapTrap d;
	d = b;
	a.attack("elakhfif2");
	b.takeDamage(5);
	c.beRepaired(5);
	return 0;
}
