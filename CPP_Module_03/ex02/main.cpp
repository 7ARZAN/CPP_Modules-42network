/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 02:44:44 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/22 07:48:58 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap f1("f1");
    FragTrap a;
    FragTrap b("b");
    FragTrap e("e");
    FragTrap c(b);
    FragTrap d;
    a = e;
    d = c;
    f1.attack("b");
    b.takeDamage(30);
    b.beRepaired(20);
    b.highFivesGuys();
    
    return 0;
}
