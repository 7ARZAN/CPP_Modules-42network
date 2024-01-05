/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 04:20:03 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/05 05:36:17 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class	Cure : public AMateria{
	public:
		Cure();
		Cure(Cure const &);
		Cure(std::string const &);
		Cure &operator=(Cure const &);
		~Cure();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
