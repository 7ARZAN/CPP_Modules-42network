/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 08:16:02 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/27 10:21:51 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal{
	public:
		WrongCat();
		WrongCat(WrongCat const &);
		WrongCat &operator=(WrongCat const &);
		virtual ~WrongCat();
		void makeSound() const;
};

#endif
