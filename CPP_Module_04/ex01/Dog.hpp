/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 08:11:33 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/27 13:20:33 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog: public Animal{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(Dog const &);
		Dog &operator=(Dog const &);
		~Dog(); //destructor should be virtual!
		void makeSound() const; //should be virtual because we have a polymorphic class (Animal)
};

#endif
