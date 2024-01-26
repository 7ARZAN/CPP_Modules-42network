/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 23:57:28 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/26 05:44:44 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;
# include "Bureaucrat.hpp"

class	AForm{
	private:
		std::string const _name;
		bool _signed;
		int const _grade_to_sign;
		int const _grade_to_execute;
		AForm();
	public:
		AForm(std::string const name, int const grade_to_sign, int const grade_to_execute);
		AForm(AForm const & src);
		AForm &operator=(AForm const & rhs);
		virtual ~AForm();
		std::string const	getName() const;
		bool	getSigned() const;
		int	getGradeToSign() const;
		int	getGradeToExecute() const;
		void	beSigned(Bureaucrat const &bureaucrat);
		virtual void	execute(Bureaucrat const &executor) const = 0;
		class	AlreadySignedException : public std::exception{
			public:
				virtual const char*	what() const throw();
		};
		class	GradeTooHighException : public std::exception{
			public:
				virtual const char*	what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw();
		};
		class FormNotSignedException : public std::exception{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &o, AForm const &rhs);

#endif
