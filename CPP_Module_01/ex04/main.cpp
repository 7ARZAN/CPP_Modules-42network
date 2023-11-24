/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 03:56:17 by elakhfif          #+#    #+#             */
/*   Updated: 2023/11/24 04:00:46 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sedhead.hpp"

int main(int argc, char **argv){
	if (argc == 4){
		Sed sed(argv[1], argv[2], argv[3]);
		sed.replace();
	}
	else
		std::cout << "Error: wrong number of arguments" << std::endl;
	return 0;
}
