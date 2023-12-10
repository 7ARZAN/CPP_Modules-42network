/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 04:07:52 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/10 22:07:29 by elakhfif         ###   ########.fr       */
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
	while (++i < 4)
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();
			break ;
		}
		else if (i == 3)
		{
			std::cout << "[TARZAN]: I dont know what you mean by " << level << ", but m sure its not important :3" << std::endl;
			break ;
		}
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
