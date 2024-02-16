/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:20:43 by tarzan            #+#    #+#             */
/*   Updated: 2024/02/16 13:57:29 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>

int	main(int ac, char **av){
	if (ac != 3)
	{
		std::cerr << "Usage: " << av[0] << " <bitcoin_file>" << " <how_much_bitcoin>" << std::endl;
		return (1);
	}
	std::ifstream file(av[1]);
	if (!file.is_open()){
		std::cerr << "Error: file not found" << std::endl;
		return (1);
	}	
	return (0);
}
