/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:41:20 by tarzan            #+#    #+#             */
/*   Updated: 2024/02/19 04:46:35 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av){
	if (ac != 2){
		std::cerr << "Usage: " << av[0] << " \"[expression]\"" << std::endl;
		return (EXIT_FAILURE);
	}
	RPN::calculator(av[1]);
	return (EXIT_SUCCESS);
}

