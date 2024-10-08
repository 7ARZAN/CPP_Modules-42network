/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:05:17 by elakhfif          #+#    #+#             */
/*   Updated: 2024/06/27 00:00:12 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("default"), _grade(MIN_GRADE){}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name), _grade(grade){
	if (grade < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src): _name(src._name), _grade(src._grade){}

Bureaucrat::~Bureaucrat(){}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs){
	if (this != &rhs)
		this->_grade = rhs._grade;
	return (*this);
}

std::string const Bureaucrat::getName() const{
	return (this->_name);
}

int	Bureaucrat::getGrade() const{
	if (this->_grade < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
	else
		return (this->_grade);
}

void	Bureaucrat::incrementGrade(){
	if (this->_grade - 1 < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade(){
	if (this->_grade + 1 > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

//sign form
void	Bureaucrat::signForm(Form& form){
	try{
		form.beSigned(*this);
		std::cout << this->_name << " signs " << form.getName() << " with grade " << this->_grade << std::endl;
	}
	catch (std::exception &e){
		std::cout << this->_name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream & o, Bureaucrat const & rhs){
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
}

const char*	Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade too low");
}
