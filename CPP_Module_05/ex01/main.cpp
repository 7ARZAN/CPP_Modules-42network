/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:04:59 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/26 08:35:13 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main( void )
{
	Bureaucrat	tarzan("DANDAN", 151);
	try
	{
		Form	form("chahada dlwafat RIP", 10, 0);
	}
	catch ( std::exception &e )
	{
		std::cerr << "[+] Exception catched.\n";
		std::cerr << e.what();
	}
	try
	{
		Form	form("chahadat zawaj", 5, 50);
		std::cout << form;
		tarzan.signForm(form);
		std::cout << form;
	}
	catch ( std::exception &e )
	{
		std::cerr << "[+] Exception catched.\n";
		std::cerr << e.what();
	}

	return (0);
}
