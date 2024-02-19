/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:20:43 by tarzan            #+#    #+#             */
/*   Updated: 2024/02/19 03:38:18 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>

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
	// call file parser here and pass the file to it "FileParser"
	// and then pass the parsed data to the BitcoinExchange class "BitcoinExchange"
	// and then call the method "getBestPrice" to get the best price "if the date exists if not get the closest date"
	// and then print the result
	return (0);
}
