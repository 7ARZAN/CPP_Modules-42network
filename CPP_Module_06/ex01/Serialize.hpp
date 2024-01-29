/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:52:34 by tarzan            #+#    #+#             */
/*   Updated: 2024/01/29 01:13:33 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>

struct	Data
{
    int	X, Y;
};

class	Serialize{
	private:
		Serialize &operator=(Serialize const& rhs);
		Serialize();
	public:
		Serialize(Serialize const& src);
		~Serialize();
		static Data	*deserialize(uintptr_t raw);
		static uintptr_t	serialize(Data *ptr);
};

#endif
