/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:04:59 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/26 05:03:19 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(){
	try
	{
		Bureaucrat b("elakhfif", 0);
		std::cout << b;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Problem is: " << e.what() << '\n';
	}
	try
	{
		Bureaucrat b("elakhfif", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Problem is: " << e.what() << '\n';
	}
	Bureaucrat b("elakhfif", 150);
	std::cout << b;
	b.incrementGrade();
	std::cout << b;
	b.decrementGrade();
	std::cout << b;
	return 0;
}
