/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:04:59 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/26 06:46:41 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotmyRequestForm.hpp"

int	main( void )
{
	Bureaucrat	tarzan("DANDAN", 10);
	try
	{
		ShrubberyCreationForm	form("home");
		RobotmyRequestForm	messi("hero");
		std::cout << form;
		tarzan.signForm(form);
		std::cout << form;
		form.execute(tarzan);
		std::cout << "-------------------------------------\n";
		std::cout << messi;
		tarzan.signForm(messi);
		std::cout << messi;
		messi.execute(tarzan);
	}
	catch ( std::exception &e )
	{
		std::cerr << "[+] Exception catched.\n";
		std::cerr << e.what();
	}
	return (0);
}
