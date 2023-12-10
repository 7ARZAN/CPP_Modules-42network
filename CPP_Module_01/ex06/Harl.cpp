/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 04:07:52 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/10 22:06:51 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void	Harl::complain(std::string level)
{
	int	i;

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	typedef void (Harl::*ptr)(void);
	ptr functions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	i = -1;
	if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR"){
		std::cout << "Harl: Invalid level, please choose one of the following levels: " << std::endl;
		while (++i < 4)
			std::cout << levels[i] << std::endl;
		return ;
	}
	switch(level[0])
	{
		case 'D':
			(this->*functions[0])();
		case 'I':
			(this->*functions[1])();
		case 'W':
			(this->*functions[2])();
		case 'E':
			(this->*functions[3])();
			break ;
	}
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]: If you're seeing this, you're in debug mode, you're a developer, and u should know better." << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]: Information is power, but like all power, there are those who want to keep it for themselves." << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]: 7adari I know Kung Fu, Karate, and 47 other dangerous words." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]: Really?! Tarzan never make mistakes, bcs Tarzan never do anything." << std::endl;
}
