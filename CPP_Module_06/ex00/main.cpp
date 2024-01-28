/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 02:24:36 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/28 02:25:36 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av){
	if (ac != 2){
		std::cout << "Usage: ./convert [string]" << std::endl;
		return 0;
	}
	ScalarConverter sc(av[1]);
	sc.convert();
	return 0;
}
