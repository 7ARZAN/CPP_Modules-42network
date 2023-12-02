/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:24:09 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/02 01:14:55 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	check_index(int i, int index)
{
	std::string	input;

	while (1)
	{
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
		if (input.length() == 1 && input[0] >= '0' && input[0] <= '9')
		{
			index = input[0] - '0';
			if (index >= 0 && index < i)
				return (1);
			else
			{
				std::cout << "\033[1;31m";
				std::cout << "[TARZAN] : INDEX NOT FOUND RTFM!\n";
				std::cout << "\033[0m";
				break ;
			}
		}
		else
		{
			std::cout << "\033[1;31m";
			std::cout << "[TARZAN] : INDEX NOT FOUND RTFM!\n";
			std::cout << "\033[0m";
			break ;
		}
	}
	return (0);
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;
	int			i;
	int			index;

	i = 0;
	index = 0;
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
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
		if (input == "ADD")
		{
			phonebook.add_contact();
			index = i;
			i++;
		}
		else if (input == "SEARCH")
		{
			phonebook.search_contact();
			//check_index(i, index);
			//if (check_index(i, index))
			phonebook.print_contact();
		}
		else if (input == "EXIT")
		{
			std::cout << "\033[1;32m";
			std::cout << "[TARZAN] : EXITING THE PHONEBOOK GOOD BYE!\n";
			std::cout << "\033[0m";
			return (0);
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
