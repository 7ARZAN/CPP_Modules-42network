/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 21:36:47 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/26 21:44:15 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotmyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern{
    public:
	Intern();
	Intern(Intern const &);
	Intern &operator=(Intern const &);
	~Intern();
	class FormDoesNotExistException: public std::exception{
		public:
			virtual const char *what() const throw();
	};
	AForm *makeForm(std::string, std::string);
};

#endif
