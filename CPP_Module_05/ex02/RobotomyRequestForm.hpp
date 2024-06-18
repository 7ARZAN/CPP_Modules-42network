/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 00:12:48 by elakhfif          #+#    #+#             */
/*   Updated: 2024/06/18 17:38:20 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string	_target;
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &);
		~RobotomyRequestForm();
		void	execute(Bureaucrat const &executor) const;
		std::string	getTarget() const;
};

#endif
