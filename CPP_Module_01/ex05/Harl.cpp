/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 04:07:52 by elakhfif          #+#    #+#             */
/*   Updated: 2023/11/24 06:00:42 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void	Harl::debug(std::string message)
{
	std::cout << "Harl: " << message << std::endl;
}

void	Harl::info(std::string message)
{
	std::cout << "Harl: " << message << std::endl;
}

void	Harl::warning(std::string message)
{
	std::cout << "Harl: " << message << std::endl;
}

void	Harl::error(std::string message)
{
	std::cout << "Harl: " << message << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i;

	std::string levels[4] = {"debug", "info", "warning", "error"};
	i = -1;
	while (++i < 4)
	{

		if (levels[i] == level)
		{
			std::cout << "Harl: " << "you got a " << level << " message" << std::endl;
			return ;
		}
		else if (i == 3)
		{
			std::cout << "Harl: " << "\"" << level << "\"" << " is not a valid level" << std::endl;
			return ;
		}
	}
}
