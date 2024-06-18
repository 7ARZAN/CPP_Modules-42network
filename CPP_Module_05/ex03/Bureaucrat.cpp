/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:05:17 by elakhfif          #+#    #+#             */
/*   Updated: 2024/06/18 17:30:22 by tarzan           ###   ########.fr       */
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

void	Bureaucrat::signForm(AForm& form){
	try{
		form.beSigned(*this);
		std::cout << this->_name << " signs " << form.getName() << std::endl;
	}
	catch (std::exception &e){
		std::cout << this->_name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream & out, Bureaucrat const & rhs){
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (out);
}

const char*	Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade too low");
}

void	Bureaucrat::executeForm(AForm const &form){
	try{
		form.execute(*this);
		std::cout << this->_name << " executes " << form.getName() << std::endl;
	}
	catch (std::exception &e){
		std::cout << this->_name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
	}
}
