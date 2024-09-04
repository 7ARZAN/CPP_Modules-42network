/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:55:35 by tarzan            #+#    #+#             */
/*   Updated: 2024/09/04 23:47:00 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av){
	std::string	line;
	std::ifstream	table;
	BitcoinExchange	dataBase;

	if (ac != 2){
		std::cerr << "\033[31m[ERROR]: \033[0m<file_name> is missing" << std::endl;
		return (EXIT_FAILURE);
	}
	dataBase.handleTables(av[1]);
	return (EXIT_SUCCESS);
}
