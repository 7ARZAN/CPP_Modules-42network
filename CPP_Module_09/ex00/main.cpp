/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:20:43 by tarzan            #+#    #+#             */
/*   Updated: 2024/02/21 19:13:42 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>

int	main(int ac, char **av){
	if (ac != 3){
		std::cerr << "Usage: " << av[0] << " <input_file>" << " <how_much_b1tc01n>" << std::endl;
		return (1);
	}
	std::ifstream file(av[1]);
	if (!file.good())
		return (std::cerr << "ERROR: file does not exist" << std::endl, 1);
	//			TODO:
	//check if " av[2] " is positive number between [0 - 1000].
	//check the file given if he has the correct infos.
	//check if data file is present in your directory.
	//search for the date given and return it.
	//error handling [input errors && data file errors].
	//create function printData() to print the data results.
	return (0);
}
