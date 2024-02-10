/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:41:20 by tarzan            #+#    #+#             */
/*   Updated: 2024/02/10 15:45:09 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av){
	if (ac != 2){
		std::cerr << "Usage: " << av[0] << " \"ur expression\"" << std::endl;
		return (EXIT_FAILURE);
	}
	//create a stack
	//parse the expression "av[1]" and store it in the stack
	//print the result of the expression "av[1]" in RPN
	return (EXIT_SUCCESS);
}
