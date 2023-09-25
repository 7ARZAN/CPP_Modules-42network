/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:53:33 by elakhfif          #+#    #+#             */
/*   Updated: 2023/09/25 19:44:25 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

//phonebook here is a constructor which is called when the object is created.
Phonebook::Phonebook()
{
    this->index = 0;
};

//~phonebook here is a destructor which is called when the object is destroyed.
Phonebook::~Phonebook()
{
};

void	Phonebook::add_contact()
{
	Contact		contact;
	if (this->index < 8)
	{
		this->contacts[this->index] = contact;
		this->index++;
	}
	else
		std::cout << "The PHONEBOOK is full\n"
		<< "You can't add more contacts\n";
}



void	Phonebook::search_contact()
{
	int		i;
	int		j;
	std::string		index;

	i = 0;
	j = 0;
	if (this->index == 0)
		std::cout << "The PHONEBOOK is empty\n";
	else
	{
		std::cout << "     index|first name| last name|  nickname\n";
		while (i < this->index)
		{
			std::cout << std::setw(10) << i + 1 << "|";
			this->contacts[i].print_contact();
			i++;
		}
		std::cout << "Enter the index of the contact you want to see\n";
		std::cin >> index;
		if (index.length() == 1 && index[0] >= '1' && index[0] <= '8')
		{
			j = index[0] - '0';
			this->contacts[j - 1].print_all_contacts();
		}
		else
			std::cout << "ERROR : invalid index\n";
	}
}

void	Phonebook::print_contact(int i)
{
	i = 0;
	while (i < this->index)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		this->contacts[i].print_contact();
		i++;
	}
}

void	Phonebook::print_all_contacts()
{
	int		i;

	i = 0;
	while (i < this->index)
	{
		this->contacts[i].print_all_contacts();
		i++;
	}
}

int	main()
{
	Phonebook	phonebook;
	std::string	command;

	std::cout << "Welcome to the PHONEBOOK\n";
	while (1)
	{
		std::cout << "Enter a command\n";
		std::cin >> command;
		if (command == "ADD")
			phonebook.add_contact();
		else if (command == "SEARCH")
			phonebook.search_contact();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "ERROR : invalid command\n";
	}
	return (0);
}
