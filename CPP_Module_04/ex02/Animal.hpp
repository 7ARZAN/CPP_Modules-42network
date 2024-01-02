/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 08:11:13 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/02 22:24:33 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class	AAnimal{
	protected:
		std::string _type;
	public:
		AAnimal();
		AAnimal(AAnimal const &);
		AAnimal &operator=(AAnimal const &);
		virtual ~AAnimal();
		std::string getType() const;
		virtual void	makeSound() const = 0;
		//virtual void	read_ideas() const;
};

#endif
