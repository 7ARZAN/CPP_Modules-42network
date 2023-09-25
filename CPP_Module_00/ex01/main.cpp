/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:24:09 by elakhfif          #+#    #+#             */
/*   Updated: 2023/09/25 20:36:31 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	int	i;
	int	index;
	PhoneBook	phonebook;
	std::string	command;

	i = 0;
	while (1)
	{
		std::cout << "[PHONEBOOK] : Enter a command (ADD, SEARCH, EXIT) : ";
		std::getline(std::cin, command);
		if (command == "EXIT")
			return (0);
		else if (command == "ADD")
		{
			if (i == 8)
				i = 0;
			std::cout << "[PHONEBOOK] : Enter your first name : ";
			std::getline(std::cin, phonebook.first_name);
			std::cout << "[PHONEBOOK] : Enter your last name : ";
			std::getline(std::cin, phonebook.last_name);
			std::cout << "[PHONEBOOK] : Enter your nickname : ";
			std::getline(std::cin, phonebook.nickname);
			std::cout << "[PHONEBOOK] : Enter your phone number : ";
			std::getline(std::cin, phonebook.phone_number);
			std::cout << "[PHONEBOOK] : Enter your darkest secret : ";
			std::getline(std::cin, phonebook.darkest_secret);
			if (phonebook.first_name.empty() || phonebook.last_name.empty() || phonebook.nickname.empty() || phonebook.phone_number.empty() || phonebook.darkest_secret.empty())
				std::cout << "[PHONEBOOK] : ARE YOU KIDDING ME ?! YOU CAN'T LEAVE ANY FIELD EMPTY !\n";
			else
				i++;
		}
		else if (command == "SEARCH")
		{
			index = 0;
			std::cout << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << std::endl;
			while (index < i)
			{
				std::cout << std::setw(10) << index << "|" << std::setw(10) << phonebook.first_name << "|" << std::setw(10) << phonebook.last_name << "|" << std::setw(10) << phonebook.nickname << std::endl;
				index++;
			}
			std::cout << "[PHONEBOOK] : Enter an index : ";
			std::cin >> index;
		}
		else
			std::cout << "[PHONEBOOK] : STUPID COMMAND DUMBASS !\n";
	}
}
