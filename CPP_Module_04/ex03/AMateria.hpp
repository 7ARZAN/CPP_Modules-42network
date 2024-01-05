/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 03:49:21 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/05 04:14:46 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class ICharacter;
class	AMateria{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(std::string const& type);
		AMateria(AMateria const&);
		AMateria &operator=(AMateria const&);
		virtual ~AMateria();
		std::string const& getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif