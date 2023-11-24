/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:24:09 by elakhfif          #+#    #+#             */
/*   Updated: 2023/11/13 21:57:34 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	check_index(int i, int index)
{
	std::string	index_str;

	std::getline(std::cin, index_str);
	if (std::cin.eof())
	{
		std::cout << std::endl;
		return (0);
	}
	if (index_str.length() > 1)
	{
		std::cout << "[PHONEBOOK] : YOU CAN'T ENTER MORE THAN ONE CHARACTER !\n";
		return (0);
	}
	if (index_str[0] < '0' || index_str[0] > '7')
	{
		std::cout << "[PHONEBOOK] : YOU CAN'T ENTER A CHARACTER THAT ISN'T A NUMBER BETWEEN 0 AND 7 !\n";
		return (0);
	}
	index = index_str[0] - '0';
	if (index >= i)
	{
		std::cout << "[PHONEBOOK] : YOU CAN'T ENTER AN INDEX THAT ISN'T IN THE LIST !\n";
		return (0);
	}
	return (1);
}

void	print_10_chars(std::string chars)
{
	if (chars.size() > 10)
	{
		chars.resize(9);
		std::cout << chars << ".";
	}
	else
		std::cout << std::setw(10) << chars;
}

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
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
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
			if (i == 0)
			{
				std::cout << "[PHONEBOOK] : YOU HAVE NO CONTACTS !\n";
				continue ;
			}
			index = 0;
			std::cout << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << std::endl;
			while (index < i)
			{
				std::cout << std::setw(10) << index << "|";
				print_10_chars(phonebook.first_name);
				std::cout << "|";
				print_10_chars(phonebook.last_name);
				std::cout << "|";
				print_10_chars(phonebook.nickname);
				std::cout << std::endl;
				index++;
			}

			std::cout << "[PHONEBOOK] : Enter an index : ";
			if (check_index(i, index) == 1)
				continue ;
		}
		else
			std::cout << "[PHONEBOOK] : STUPID COMMAND DUMBASS !\n";
	}
}
