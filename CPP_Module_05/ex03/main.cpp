/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:04:59 by elakhfif          #+#    #+#             */
/*   Updated: 2024/06/27 00:07:04 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// int	main( void )
// {
// 	// Bureaucrat	tarzan("DANDAN", 5);
// 	// try
// 	// {
// 	// 	ShrubberyCreationForm	form("home");
// 	// 	RobotmyRequestForm	messi("hero");
// 	// 	PresidentialPardonForm	pardon("pardon");
// 	// 	std::cout << form;
// 	// 	tarzan.signForm(form);
// 	// 	std::cout << form;
// 	// 	form.execute(tarzan);
// 	// 	std::cout << "-------------------------------------\n";
// 	// 	std::cout << messi;
// 	// 	tarzan.signForm(messi);
// 	// 	std::cout << messi;
// 	// 	messi.execute(tarzan);
// 	// 	std::cout << "-------------------------------------\n";
// 	// 	std::cout << pardon;
// 	// 	tarzan.signForm(pardon);
// 	// 	std::cout << pardon;
// 	// 	pardon.execute(tarzan);
// 	// }
// 	// catch ( std::exception &e )
// 	// {
// 	// 	std::cerr << "[+] Exception catched.\n";
// 	// 	std::cerr << e.what();
// 	// }
// 	// std::cout << "-------------------------------------\n";
// 	try
// 	{
// 		Intern someRandomIntern;
// 		AForm* rrf;
// 		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
// 		rrf->execute(Bureaucrat("Bender", 40));
// 		std::cout << *rrf;
// 		delete rrf;
// 		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
// 		rrf->execute(Bureaucrat("Bender", 40));
// 		std::cout << *rrf;
// 		delete rrf;
// 		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
// 		rrf->execute(Bureaucrat("Bender", 40));
// 		std::cout << *rrf;
// 		delete rrf;
// 		rrf = someRandomIntern.makeForm("shrubbery", "Bender");
// 		rrf->execute(Bureaucrat("Bender", 40));
// 		std::cout << *rrf;
// 		delete rrf;
// 	}
// 	catch ( std::exception &e )
// 	{
// 		std::cerr << "[+] Exception catched.\n";
// 		std::cerr << e.what();
// 	}
// 	return (0);
// }

int	ft_main(){
	//Bureaucrat	tarzan("OTKAZALI", 190);
	Intern		ruki;
	AForm		*form;

	try
	{
		Bureaucrat	tarzan("OTKAZALI", 190);
		form = ruki.makeForm("robotomy request", "home");
		tarzan.signForm(*form);
		tarzan.executeForm(*form);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	//form = ruki.makeForm("shrubbery creation", "home");
	//tarzan.signForm(*form);
	//tarzan.executeForm(*form);
	delete form;
	return (0);
}

int	main( void )
{
	ft_main();
	system("leaks Intern");
}
