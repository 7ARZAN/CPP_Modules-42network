/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 08:11:40 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/05 03:46:01 by elakhfif         ###   ########.fr       */
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
		Cat(Brain *brain);
		Cat(Cat const &);
		Cat &operator=(Cat const &);
		~Cat();
		void makeSound() const;
};

#endif
