/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:32:46 by elakhfif          #+#    #+#             */
/*   Updated: 2023/09/15 13:47:21 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

using namespace std;

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i=1; i < ac; i++)
		{
			for (int j = 0; j < (int)strlen(av[i]); j++)
				std::cout << (char)toupper(av[i][j]);
		}
	}
	return (0);
}
