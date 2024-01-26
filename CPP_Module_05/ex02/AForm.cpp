/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 00:01:05 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/26 05:44:51 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name("default"), _signed(false), _grade_to_sign(150), _grade_to_execute(150){}

AForm::AForm(std::string name, int grade_to_sign, int grade_to_execute): _name(name), _signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute){
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw AForm::GradeTooHighException();
	else if (grade_to_sign > 150 || grade_to_execute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const & src): _name(src._name), _signed(src._signed), _grade_to_sign(src._grade_to_sign), _grade_to_execute(src._grade_to_execute){}

AForm::~AForm(){}

AForm&	AForm::operator=(AForm const& rhs){
	if (this != &rhs)
		this->_signed = rhs._signed;
	return *this;
}

bool	AForm::getSigned() const{
	return this->_signed;
}

int	AForm::getGradeToSign() const{
	return this->_grade_to_sign;
}

int	AForm::getGradeToExecute() const{
	return this->_grade_to_execute;
}

void	AForm::beSigned(Bureaucrat const &){
	if (this->_signed == true)
		throw AForm::AlreadySignedException();
	else if (this->_grade_to_sign < 1)
		throw AForm::GradeTooHighException();
	else if (this->_grade_to_sign > 150)
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
}

std::string const	AForm::getName() const{
	if (this->_name.empty())
		return "default";
	else
		return this->_name;
}

const char*	AForm::GradeTooHighException::what() const throw(){
	return "OH NO! the Grade is too high";
}

const char*	AForm::GradeTooLowException::what() const throw(){
	return "OH NO! the Grade is too low";
}

const char*	AForm::AlreadySignedException::what() const throw(){
	return "OH SHEESH Already exist :3";
}

const char*	AForm::FormNotSignedException::what() const throw(){
	return "daaaaaaaamn! the Form not signed";
}

std::ostream	&operator<<(std::ostream &o, AForm const &rhs){
	o << " Form name: " << rhs.getName() << " Grade to sign: " << rhs.getGradeToSign() << " Grade to execute: " << rhs.getGradeToExecute() << " Signed: " << rhs.getSigned() << std::endl;
	return o;
}
