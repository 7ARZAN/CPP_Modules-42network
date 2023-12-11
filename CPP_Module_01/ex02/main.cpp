/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 02:29:46 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/11 22:33:07 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::cout << "String is: " << str << std::endl;
	std::cout << "address of STRING is: " << &str << std::endl;
	std::cout << "\n";

	std::string *ptr = &str;
	std::cout << "stringPTR is: " << *ptr << std::endl;
	std::cout << "address of PTR is: " << ptr << std::endl;
	std::cout << "\n";
	std::string &ref = str;
	std::cout << "stringREF is: " << ref << std::endl;
	std::cout << "address of REF is: " << &ref << std::endl;
}
