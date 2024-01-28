/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:52:21 by tarzan            #+#    #+#             */
/*   Updated: 2024/01/28 20:06:50 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data *ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
	// char	*raw = new char[20];
	// char	alphanum[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	// int		i = -1;
	//
	// srand(time(NULL));
	// while (++i < 8)
	// 	raw[i] = alphanum[rand() % 62];
	// *reinterpret_cast<int *>(raw + 8) = rand();
	// i = 11;
	// while (++i < 20)
	// 	raw[i] = alphanum[rand() % 62];
	// return (raw);
}

Data	*deserialize(uintptr_t raw){
	return (reinterpret_cast<Data *>(raw));
}

int main(void) {
    Data data = {0, 1};

    Data *ptr = deserialize(serialize(&data));
    

    std::cout << ptr << " | " << &data << std::endl;
    std::cout << (ptr == &data ? "The same pointer" : "pointers are different") << std::endl;

    std::cout << "x: " << ptr->X << std::endl;
    std::cout << "y: " << ptr->Y << std::endl;

    serialize(ptr);
    std::cout << "we serialize the pointer" << std::endl;
    ptr->X = 42;
    ptr->Y = 21;
    std::cout << "x: " << ptr->X << std::endl;
    std::cout << "y: " << ptr->Y << std::endl;
    return 0;
}
