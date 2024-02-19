/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:41:20 by tarzan            #+#    #+#             */
/*   Updated: 2024/02/19 03:41:57 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av){
	if (ac < 2){
		std::cerr << "Usage: " << av[0] << " ur expression" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string rpn;
	for (int i = 1; i < ac; i++){
		rpn += av[i];
		rpn += " ";
	}
	calculator(rpn);
	return (EXIT_SUCCESS);
}
