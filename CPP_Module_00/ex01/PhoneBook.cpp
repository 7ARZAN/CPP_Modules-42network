/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:53:33 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/02 02:25:12 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int lol;
int trigger;

void	PhoneBook::add_contact(void)
{
	std::string buffers[5];
	std::string prompts[5] = {"First name eh? : ", "Last name eh? : ", "Nickname eh? : ",
		"Phone number eh? [only moroccan prefix is accepted (+212) no algerian spies] : ", 
		"Deepest darkest secret : "};
	int x = -1;
	while (++x < 5){
		std::cout << "\033[1;32m";
		std::cout << prompts[x];
		std::cout << "\033[0m";
		std::getline(std::cin, buffers[x]);
		if (x == 3 && "+212" != buffers[x].substr(0, 4) && buffers[x].size() != 12){
			std::cout << "\033[1;31m" << "BRUH!! from ANOTHER PLANET?!" << "\033[0m" << std::endl;
			return ;
		}
		if (buffers[x].empty() == true){
			std::cout << "\033[1;31m" << "[TARZAN]: BRUH, YOU MISSED SOMETHING" << "\033[0m" << std::endl;
			x--;
		}
	}
	this->contacts[this->index].setfirst_name(buffers[0]);
	this->contacts[this->index].setlast_name(buffers[1]);
	this->contacts[this->index].setnickname(buffers[2]);
	this->contacts[this->index].setphone_number(buffers[3]);
	this->contacts[this->index].setdarkest_secret(buffers[4]);

	this->index++;
	if (this->index < 2 && trigger == 0)
		lol++;
	if (this->index >= 2)
	{
		this->index = 0;
		lol = 2;
		trigger = 1;
		// int i = -1;
		// while (++i <= 1)
		// 	this->contacts[i] = this->contacts[i + 1];
		// this->index--;
	}
	std::cout << "\033[1;31m" << "[TARZAN]: BRAH, CONTACT ADDED" << "\033[0m" << std::endl;
}

void	PhoneBook::search_contact(void)
{
	int i;
	int j;
	std::string input;

	i = 0;
	j = 0;
	if (lol == 0)
	{
		std::cout << "\033[1;31m" << "[TARZAN]: BRAH, NO CONTACTS TO SEARCH" << "\033[0m" << std::endl;
		return ;
	}
	std::cout << "\033[1;31m" << "     index|first name| last name|  nickname" << "\033[0m" << std::endl;
	while (i < lol)
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
	if (j < 0 || j >= lol)
	{
		std::cout << "\033[1;31m" << "[TARZAN]: BRUH, INVALID INDEX" << "\033[0m" << std::endl;
		return ;
	}
	std::cout << "\033[1;37m" << "first name : " << "\033[0m" << this->contacts[j].getfirst_name() << std::endl;
	std::cout << "\033[1;37m" << "last name : " << "\033[0m" << this->contacts[j].getlast_name() << std::endl;
	std::cout << "\033[1;37m" << "nickname : " << "\033[0m" << this->contacts[j].getnickname() << std::endl;
	std::cout << "\033[1;37m" << "phone number : " << "\033[0m" << this->contacts[j].getphone_number() << std::endl;
	std::cout << "\033[1;37m" << "darkest secret : " << "\033[0m" << this->contacts[j].getdarkest_secret() << std::endl;
	while (1)
	{
		std::cout << "Do you want to see another contact? [y/n] : ";
		std::getline(std::cin, input);
		if (input == "y")
		{
			search_contact();
			break ;
		}
		else if (input == "n")
			return ;
		else
			std::cout << "\033[1;31m" << "[TARZAN]: BRUH, INVALID INPUT" << "\033[0m" << std::endl;
	}
}

void	PhoneBook::print_contact(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (this->index == 0)
		return ;
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

PhoneBook::PhoneBook () {
	this->index = 0;
}
