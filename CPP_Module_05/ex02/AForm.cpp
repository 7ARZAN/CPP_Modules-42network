/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 00:01:05 by elakhfif          #+#    #+#             */
/*   Updated: 2024/06/26 22:37:43 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name("default"), _signed(false), _grade_to_sign(MIN_GRADE), _grade_to_execute(MIN_GRADE){}

AForm::AForm(std::string name, int grade_to_sign, int grade_to_execute): _name(name), _signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute){
	if (grade_to_sign < MAX_GRADE || grade_to_execute < MAX_GRADE)
		throw AForm::GradeTooHighException();
	else if (grade_to_sign > MIN_GRADE || grade_to_execute > MIN_GRADE)
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

void	AForm::beSigned(Bureaucrat const &Bureaucrat){
	if (this->_signed == true)
		throw AForm::AlreadySignedException();
	else if (this->_grade_to_sign < Bureaucrat.getGrade())
		throw AForm::FormNotSignedException();
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
	return "the Grade is too high";
}

const char*	AForm::GradeTooLowException::what() const throw(){
	return "the Grade is too low";
}

const char*	AForm::AlreadySignedException::what() const throw(){
	return "already exist [ signed ]";
}

const char*	AForm::FormNotSignedException::what() const throw(){
	return "the Form not signed [ false ]";
}

const char*	AForm::FormNotExecutedException::what() const throw(){
	return "the Form not executed [ false ]";
}

std::ostream	&operator<<(std::ostream &out, AForm const &rhs){
	out << " Form name: " << rhs.getName() << " Grade to sign: " << rhs.getGradeToSign() << " Grade to execute: " << rhs.getGradeToExecute() << " Signed: " << rhs.getSigned() << std::endl;
	return out;
}
