/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:41:20 by tarzan            #+#    #+#             */
/*   Updated: 2024/02/18 01:12:20 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>
#include <string>
#include <stack>

int	main(int ac, char **av){
	if (ac != 2){
		std::cerr << "Usage: " << av[0] << " \"ur expression\"" << std::endl;
		return (EXIT_FAILURE);
	}
	calculator(av[1]);
	return (EXIT_SUCCESS);
}
