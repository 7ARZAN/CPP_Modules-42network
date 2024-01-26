/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 21:36:41 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/26 21:59:13 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(Intern const &i){
	*this = i;
}

Intern::~Intern(){}

Intern	&Intern::operator=(Intern const &i){
	(void)i;
	return *this;
}

AForm	*Intern::makeForm(std::string form, std::string target){
	std::string forms[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm	*ret;
	int	i;

	i = 0;
	for (; i < 3; i++)
	{
		if (form == forms[i])
			break ;
	}
	switch (i)
	{
		case 0:
			ret = new RobotmyRequestForm(target);
			break ;
		case 1:
			ret = new PresidentialPardonForm(target);
			break ;
		case 2:
			ret = new ShrubberyCreationForm(target);
			break ;
		default:
			throw FormDoesNotExistException();
	}
	std::cout << "Intern creates " << ret->getName() << std::endl;
	return ret;

}

const char *Intern::FormDoesNotExistException::what() const throw(){
	return "Form does not exist";
}
