/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 08:11:13 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/27 10:16:20 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(Animal const &);
		Animal &operator=(Animal const &);
		virtual ~Animal(); //should be virtual because we have a polymorphic class (Animal)
		std::string getType() const;
		virtual void makeSound() const; //virtual because we have a polymorphic class (Animal)
};

#endif
