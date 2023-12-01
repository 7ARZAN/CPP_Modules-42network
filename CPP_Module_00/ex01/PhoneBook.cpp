/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:53:33 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/01 07:25:45 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::add_contact(void)
{
	static int  i;
	while (i < 8)
	{
		std::getline(std::cin, this->contacts[i].first_name);
		std::getline(std::cin, this->contacts[i].last_name);
		std::getline(std::cin, this->contacts[i].nickname);
		std::getline(std::cin, this->contacts[i].phone_number);
		std::getline(std::cin, this->contacts[i].darkest_secret);
		if (this->contacts[i].first_name.empty() || this->contacts[i].last_name.empty() || this->contacts[i].nickname.empty() || this->contacts[i].phone_number.empty() || this->contacts[i].darkest_secret.empty())
		{
			std::cout << "You must fill all the fields" << std::endl;
			continue ;
		}
		this->index++;
		i++;
		break ;
	}
	if (i == 8)
		i = 0;
}

void	PhoneBook::search_contact(void)
{
	int i;
	int j;
	std::string input;

	i = 0;
	j = 0;
	if (this->index == 0)
	{
		std::cout << "No contacts to search for" << std::endl;
		return ;
	}
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	while (i < this->index)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << this->contacts[i].getfirst_name() << "|";
		std::cout << std::setw(10) << this->contacts[i].getlast_name() << "|";
		std::cout << std::setw(10) << this->contacts[i].getnickname() << std::endl;
		i++;
	}
	std::cout << "Enter the index of the contact you want to see : ";
	std::getline(std::cin, input);
	j = std::atoi(input.c_str());
	if (j < 0 || j >= this->index)
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	std::cout << "first name : " << contacts[j].getfirst_name() << std::endl;
	std::cout << "last name : " << contacts[j].getlast_name() << std::endl;
	std::cout << "nickname : " << contacts[j].getnickname() << std::endl;
	std::cout << "phone number : " << contacts[j].getphone_number() << std::endl;
	std::cout << "darkest secret : " << contacts[j].getdarkest_secret() << std::endl;
}

void	PhoneBook::print_contact(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (this->index == 0)
	{
		std::cout << "\033[1;31m" << "[TARZAN]: BRAH, NO CONTACTS TO PRINT" << "\033[0m" << std::endl;
		return ;
	}
	std::cout << "\033[1;31m" << "     index|first name| last name|  nickname" << "\033[0m" << std::endl;
	while (i < this->index)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << contacts[i].getfirst_name() << "|";
		std::cout << std::setw(10) << contacts[i].getlast_name() << "|";
		std::cout << std::setw(10) << contacts[i].getnickname() << std::endl;
		i++;
	}
}
