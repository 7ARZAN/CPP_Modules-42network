/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:04:59 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/21 16:46:50 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main( void )
{
	Bureaucrat	tarzan("DANDAN", 5);
	try
	{
		Form	form("chahada dlwafat RIP", 10, 0);
	}
	catch ( std::exception &e )
	{
		std::cerr << "[+] Exception catched.\n";
		std::cerr << e.what();
	}
	Form	form("chahadat zawaj", 5, 50);
	std::cout << form;
	tarzan.SignForm(form);
	std::cout << form;

	return (0);
}
