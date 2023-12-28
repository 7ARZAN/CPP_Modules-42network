/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 08:11:13 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/28 23:25:28 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class	Animal{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(Animal const &);
		Animal &operator=(Animal const &);
		virtual ~Animal();
		std::string getType() const;
		virtual void makeSound() const;
};

#endif
