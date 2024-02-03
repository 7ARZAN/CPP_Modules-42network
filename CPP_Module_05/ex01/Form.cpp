/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:09:39 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/30 03:17:27 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("default"), _signed(false), _grade_to_sign(150), _grade_to_execute(150){}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute): _name(name), _signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute){
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw Form::GradeTooHighException();
	else if (grade_to_sign > 150 || grade_to_execute > 150)
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

void	Form::beSigned(Bureaucrat const &){
	if (this->_signed == true)
		throw Form::AlreadySignedException();
	else if (this->_grade_to_sign < 1)
		throw Form::GradeTooHighException();
	else if (this->_grade_to_sign > 150)
		throw Form::GradeTooLowException();
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
	return "already exist :3";
}

const char*	Form::FormNotSignedException::what() const throw(){
	return " the Form not signed";
}

std::ostream	&operator<<(std::ostream &o, Form const &rhs){
	o << " Form name: " << rhs.getName() << " Grade to sign: " << rhs.getGradeToSign() << " Grade to execute: " << rhs.getGradeToExecute() << " Signed: " << rhs.getSigned() << std::endl;
	return o;
}
