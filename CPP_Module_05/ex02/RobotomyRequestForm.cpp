/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 06:17:41 by elakhfif          #+#    #+#             */
/*   Updated: 2024/02/21 23:24:31 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45){
	this->_target = "0x0default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45){
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src): AForm(src){
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs){
	if (this != &rhs)
		this->_target = rhs._target;
	return *this;
}

std::string	RobotomyRequestForm::getTarget() const{
	return this->_target;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else{
		int	i;

		srand(time(NULL));
		i = rand() % 2;
		if (i == 0)
			std::cout << this->_target << " has been robotomized successfully." << std::endl;
		else
			std::cout << this->_target << " has been robotomized failure." << std::endl;
	}
}
