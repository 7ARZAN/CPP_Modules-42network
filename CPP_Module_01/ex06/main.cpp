/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 06:02:11 by elakhfif          #+#    #+#             */
/*   Updated: 2023/11/24 06:13:36 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	int	i;

	if (ac != 2)
	{
		std::cout << "Usage: ./harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
		return 0;
	}
	std::string type = av[1];
	std::string types[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	i = -1;
	while (++i < 4)
	{
		if (type == types[i])
			break ;
	}
	// Harl h[4] = {Harl("DEBUG", "BRUH!, DEBUG your shit!"),
	// 	Harl("INFO", "What do you think about this? I think it’s an info."),
	// 	Harl("WARNING", "I think I deserve to have some extra bacon for free."),
	// 	Harl("ERROR", "This is unacceptable, I want to speak to the manager now.")};
	
}
