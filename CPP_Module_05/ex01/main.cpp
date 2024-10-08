/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:04:59 by elakhfif          #+#    #+#             */
/*   Updated: 2024/06/27 00:00:46 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main( void )
{
	Bureaucrat	tarzan(" DANDAN", 2);
	try
	{
		Form	form("chahada dlwafat RIP", 10, 0);
		std::cout << form;
		tarzan.signForm(form);
		std::cout << form;
		std::cout << "---------------------------------" << '\n';
	}
	catch ( std::exception &e)
	{
		std::cerr << "[+] Exception catched.\n";
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form	form("chahadat zawaj", 5, 0);
		std::cout << form;
		tarzan.signForm(form);
		std::cout << form;
	}
	catch ( std::exception &e )
	{
		std::cerr << "[+] Exception catched.\n";
		std::cerr << e.what() << '\n';
	}
	return (0);
}
