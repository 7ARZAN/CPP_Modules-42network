/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:05:23 by elakhfif          #+#    #+#             */
/*   Updated: 2024/06/18 17:38:46 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# define MAX_GRADE 1
# define MIN_GRADE 150

class AForm;
# include "AForm.hpp"

class Bureaucrat
{
	private:
		std::string const	_name;
		int	_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat();
		Bureaucrat	&operator=(Bureaucrat const &rhs);
		std::string const	getName() const;
		int	getGrade() const;
		void	incrementGrade();
		void	decrementGrade();
		void	signForm(AForm& form);
		void	executeForm(AForm const &form);
		class GradeTooHighException: public std::exception{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &rhs);

#endif
