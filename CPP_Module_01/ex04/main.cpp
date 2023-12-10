/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 03:56:17 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/10 23:14:09 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sedhead.hpp"

int main(int argc, char **argv){
	if (argc == 4){
		Sed sed(argv[1], argv[2], argv[3]);
		if (*argv[2] == '\0' || *argv[3] == '\0')
			return (EXIT_FAILURE);
		else if (*argv[2] == *argv[3])
			return (EXIT_SUCCESS);
		sed.replace();
	}
	else
		std::cout << "Error: wrong number of arguments" << std::endl;
	return 0;
}
