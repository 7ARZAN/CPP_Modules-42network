/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:09:53 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/20 17:06:22 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class	Bureaucrat;
class	Form{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_grade_to_sign;
		int const			_grade_to_execute;
	public:
		Form();
		Form(std::string const, int const, int const);
		Form(Form const &);
		Form	&operator=(Form const &);
		~Form();

		std::string const	getName() const;
		bool				getSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		void				beSigned(Bureaucrat const &);
		class	GradeTooHighException: public std::exception{
			public:
				virtual const char* what() const throw();
		};
		class	GradeTooLowException: public std::exception{
			public:
				virtual const char* what() const throw();
		};
		class	FormNotSignedException: public std::exception{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &, Form const &);

#endif
