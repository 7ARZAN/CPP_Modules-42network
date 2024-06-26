/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:09:39 by elakhfif          #+#    #+#             */
/*   Updated: 2024/06/26 21:52:26 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("default"), _signed(false), _grade_to_sign(MIN_GRADE), _grade_to_execute(MIN_GRADE){}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute): _name(name), _signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute){
	if (grade_to_sign < MAX_GRADE || grade_to_execute < MAX_GRADE)
		throw Form::GradeTooHighException();
	else if (grade_to_sign > MIN_GRADE || grade_to_execute > MIN_GRADE)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & src): _name(src._name), _signed(src._signed), _grade_to_sign(src._grade_to_sign), _grade_to_execute(src._grade_to_execute){}

Form::~Form(){}

Form&	Form::operator=(Form const& rhs){
	if (this != &rhs)
		this->_signed = rhs._signed;
	return *this;
}

bool	Form::getSigned() const{
	return this->_signed;
}

int	Form::getGradeToSign() const{
	return this->_grade_to_sign;
}

int	Form::getGradeToExecute() const{
	return this->_grade_to_execute;
}

void	Form::beSigned(Bureaucrat const &Bureaucrat){
	if (this->_signed == true)
		throw Form::AlreadySignedException();
	else if (this->_grade_to_sign < Bureaucrat.getGrade())
		throw Form::FormNotSignedException();
	else
		this->_signed = true;
}

std::string const	Form::getName() const{
	if (this->_name.empty())
		return "default";
	else
		return this->_name;
}

const char*	Form::GradeTooHighException::what() const throw(){
	return " the Grade is too high";
}

const char*	Form::GradeTooLowException::what() const throw(){
	return " the Grade is too low";
}

const char*	Form::AlreadySignedException::what() const throw(){
	return "already Form signed";
}

const char*	Form::FormNotSignedException::what() const throw(){
	return " the Form not signed";
}

std::ostream	&operator<<(std::ostream &output, Form const &rhs){
	output << " Form name: " << rhs.getName() << " Grade to sign: " << rhs.getGradeToSign() << " Grade to execute: " << rhs.getGradeToExecute() << " Signed: " << rhs.getSigned() << std::endl;
	return output;
}
