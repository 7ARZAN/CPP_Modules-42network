/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 02:44:44 by elakhfif          #+#    #+#             */
/*   Updated: 2024/12/26 16:21:45 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(){
    DiamondTrap	tarzan("tarzan");

    tarzan.attack("jane");
    tarzan.takeDamage(1000);
    tarzan.beRepaired(1000);
    tarzan.guardGate();
    tarzan.highFivesGuys();
    tarzan.whoAmI();

    return 0;
}
