/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:20:43 by tarzan            #+#    #+#             */
/*   Updated: 2024/02/12 23:12:02 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>

//exxgange loadBitcoinList function
void	BitcoinExchange::loadBitcoinList(std::string const &filename){
	std::ifstream	file(filename);
	std::string		line;
	std::string		name;
	double			price;

	if (file.is_open())
	{
		while (std::getline(file, line))
		{
			std::istringstream iss(line);
			iss >> name >> price;
			bitcoinList[name] = price;
		}
		file.close();
	}
	else
		std::cerr << "Error: could not open file " << filename << std::endl;
}

void	BitcoinExchange::displayBitcoinList() const{
	std::map<std::string, double>::const_iterator it = bitcoinList.begin();
	while (it != bitcoinList.end())
	{
		std::cout << it->first << " " << it->second << std::endl;
		it++;
	}
}

int	main(int ac, char **av){
	if (ac != 2)
	{
		std::cout << "Usage: " << av[0] << " <bitcoin_file>" << std::endl;
		return (1);
	}
	BitcoinExchange exchange;
	exchange.loadBitcoinList(av[1]);
	exchange.displayBitcoinList();
	return (0);
}
