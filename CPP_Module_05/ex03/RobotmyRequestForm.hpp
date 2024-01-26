/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 00:12:48 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/26 07:54:26 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

class RobotmyRequestForm : public AForm{
	private:
		std::string _target;
		RobotmyRequestForm();
	public:
		RobotmyRequestForm(std::string target);
		RobotmyRequestForm(RobotmyRequestForm const &);
		RobotmyRequestForm &operator=(RobotmyRequestForm const &);
		~RobotmyRequestForm();
		void	execute(Bureaucrat const &executor) const;
		std::string	getTarget() const;
};

#endif
