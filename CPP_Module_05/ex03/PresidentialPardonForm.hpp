/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 07:45:33 by elakhfif          #+#    #+#             */
/*   Updated: 2024/06/18 17:39:00 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include "AForm.hpp"
# include <iostream>

class	PresidentialPardonForm: public AForm
{
	private:
		std::string	_target;
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(std::string);
		PresidentialPardonForm(PresidentialPardonForm const &);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &);
		virtual ~PresidentialPardonForm();
		void	execute(Bureaucrat const &) const;
		std::string	getTarget() const;
};

#endif
