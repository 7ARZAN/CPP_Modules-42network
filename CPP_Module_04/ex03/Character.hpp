/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 04:00:52 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/10 03:51:00 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>

class	Character : public ICharacter{
	private:
		std::string _name;
		AMateria *_inventory[4];
		AMateria *_tmp[4];
		//AMateria *_items[4];
		//AMateria	**_garbage;
		//int	_garbage_length;
		int _count;
	public:
		Character();
		Character(std::string const &name);
		Character(Character const &src);
		Character &operator=(Character const &rhs);
		virtual ~Character();
		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
		//void print_garbage(void);
};

std::ostream &operator<<(std::ostream &o, Character const &rhs);

#endif
