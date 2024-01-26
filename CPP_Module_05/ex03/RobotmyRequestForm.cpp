/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 06:17:41 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/26 06:37:51 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotmyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm(): AForm("RobotmyRequestForm", 72, 45){
	this->_target = "0x0default";
}

RobotmyRequestForm::RobotmyRequestForm(std::string target): AForm("RobotmyRequestForm", 72, 45){
	this->_target = target;
}

RobotmyRequestForm::RobotmyRequestForm(RobotmyRequestForm const& src): AForm(src){
	*this = src;
}

RobotmyRequestForm::~RobotmyRequestForm(){}

RobotmyRequestForm & RobotmyRequestForm::operator=(RobotmyRequestForm const& rhs){
	if (this != &rhs)
		this->_target = rhs._target;
	return *this;
}

std::string	RobotmyRequestForm::getTarget() const{
	return this->_target;
}

void	RobotmyRequestForm::execute(Bureaucrat const &executor) const{
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
