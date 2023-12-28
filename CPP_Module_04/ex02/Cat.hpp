/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 08:11:40 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/28 23:28:18 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat: public Animal{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(Cat const &);
		Cat &operator=(Cat const &);
		~Cat(); //destructor should be virtual!
		void makeSound() const;
};

#endif
