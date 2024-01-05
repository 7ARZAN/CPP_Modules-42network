/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 04:21:41 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/05 04:22:44 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP

# define ICE_HPP

# include "AMateria.hpp"

class	Ice : public AMateria{
	public:
		Ice();
		Ice(Ice const &);
		Ice &operator=(Ice const &);
		~Ice();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
