/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:52:21 by tarzan            #+#    #+#             */
/*   Updated: 2024/01/29 01:11:45 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

//@brief: constructor of the class without parameters (canonical)
Serialize::Serialize(){}

//@brief: constructor of the class with parameters (canonical)
Serialize::Serialize(Serialize const &src){
	*this = src;
}

//@brief: destructor of the class (canonical)
Serialize::~Serialize(){}

//@brief: operator overload = (canonical)
//@desc: operator overload = takes a Serialize const as parameter and does a deep copy of the data.
//@param: Serialize const
//@return: Serialize
Serialize &Serialize::operator=(Serialize const &rhs){
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

//@brief: serialize the data structure
//@param: Data structure.
//@return: uintptr_t
//@desc: serialize the data structure and return the address of the data structure as a uintptr_t type.
// uintptr_t is an unsigned integer type that is capable of storing a data pointer.
//serialize() function takes a pointer to the data structure and returns the address of the data structure as a uintptr_t type.
uintptr_t	Serialize::serialize(Data *ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

//@brief: deserialize the data structure
//@param: uintptr_t
//@return: Data structure.
//@desc: deserialize the data structure and return the data structure.
//deserialize() function takes the address of the data structure as a uintptr_t type and returns the data structure.
Data*	Serialize::deserialize(uintptr_t raw){
	return (reinterpret_cast<Data *>(raw));
}
