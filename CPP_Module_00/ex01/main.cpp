/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:24:09 by elakhfif          #+#    #+#             */
/*   Updated: 2024/12/25 17:15:36 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void){
	PhoneBook	phonebook;
	std::string	input;
	int		i;

	i = 0;
	std::cout << "\033[1;32m";
	std::cout << "\n\n\n";
	std::cout << std::setw(96);
	std::cout << "Welcome to the phonebook by tarzan!\n";
	std::cout << std::setw(104);
	std::cout << "You can use the following commands : ADD, SEARCH, EXIT\n";
	std::cout << std::setw(98);
	std::cout << "RTFM to know how to use the phonebook!\n\n\n\n";
	std::cout << "\033[0m";
	while (1)
	{
		std::cout << "\033[1;34m";
		std::cout << "Enter a command : ";
		std::cout << "\033[0m";
		std::getline(std::cin, input);
		if (std::cin.eof()){
			std::cout << std::endl;
			return (0);
		}
		if (input == "ADD"){
			phonebook.add_contact();
			i++;
		}
		else if (input == "SEARCH"){
			phonebook.search_contact();
			if (i == 8)
				i = 0;
			phonebook.print_contact();
		}
		else if (input == "EXIT"){
			std::cout << "\033[1;32m";
			std::cout << "[TARZAN] : EXITING THE PHONEBOOK GOOD BYE!\n";
			std::cout << "\033[0m";
			break ;
		}
		else
		{
			std::cout << "\033[1;31m";
			std::cout << "[TARZAN] : COMMAND NOT FOUND RTFM!\n";
			std::cout << "\033[0m";
		}
	}
	return (0);
}
