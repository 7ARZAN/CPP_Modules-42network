/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 00:12:48 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/26 00:13:10 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP

# include "Form.hpp"
# include <iostream>

class RobotmyRequestForm : public Form
{
    private:
	std::string _target;
    public:
	RobotmyRequestForm();
	RobotmyRequestForm(std::string target);
	RobotmyRequestForm(RobotmyRequestForm const &);
	RobotmyRequestForm &operator=(RobotmyRequestForm const &);
	~RobotmyRequestForm();
	void execute(Bureaucrat const &executor) const;
};
