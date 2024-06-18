/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:05:17 by elakhfif          #+#    #+#             */
/*   Updated: 2024/06/18 17:13:07 by tarzan           ###   ########.fr       */
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
