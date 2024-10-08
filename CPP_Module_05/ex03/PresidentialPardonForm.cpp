/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 07:45:42 by elakhfif          #+#    #+#             */
/*   Updated: 2024/06/26 23:58:15 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"
# include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), _target("default"){}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src): AForm(src), _target(src._target){}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src){
	if (this != &src){
		this->_target = src._target;
	}
	return (*this);
}

std::string	PresidentialPardonForm::getTarget() const{
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
		std::cout << this->_target << " has been pardoned by dandan tarzan." << std::endl;
}

std::ostream &operator<<(std::ostream &out, PresidentialPardonForm const &src){
	if (src.getSigned())
		out << src.getName() << " form, grade required to sign it " << src.getGradeToSign() << ", grade required to execute it " << src.getGradeToExecute() << ", it is signed" << std::endl;
	else
		out << src.getName() << " form, grade required to sign it " << src.getGradeToSign() << ", grade required to execute it " << src.getGradeToExecute() << ", it is not signed" << std::endl;
	return (out);
}
