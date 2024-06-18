/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 00:07:26 by elakhfif          #+#    #+#             */
/*   Updated: 2024/06/18 17:38:27 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Bureaucrat.hpp"

class	ShrubberyCreationForm: public AForm
{
	private:
		std::string	_target;
		ShrubberyCreationForm();
	public:
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(ShrubberyCreationForm const &);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);
		virtual ~ShrubberyCreationForm();
		virtual void	execute(Bureaucrat const &executor) const;
		std::string	getTarget() const;
};

#endif
