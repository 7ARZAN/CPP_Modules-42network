/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 01:01:22 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/29 01:17:11 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main(void) {
    Data	data = {0, 1};
    Data	*ptr;

    ptr = Serialize::deserialize(Serialize::serialize(&data));
    

    std::cout << ptr << " | " << &data << std::endl;
    std::cout << (ptr == &data ? "The same pointer" : "pointers are different") << std::endl;

    std::cout << "x: " << ptr->X << std::endl;
    std::cout << "y: " << ptr->Y << std::endl;
    std::cout << "-------------------------" << std::endl;
    Data	*X = new Data;
    Data	*Y = new Data;

    X->X = 10;
    X->Y = 20;
    Y->X = 30;
    Y->Y = 40;
    uintptr_t	raw = Serialize::serialize(X);
    std::cout << "raw: " << raw << std::endl;
    Data	*Z = Serialize::deserialize(raw);
    std::cout << "Z: " << Z << std::endl;
    std::cout << "Z->X: " << Z->X << std::endl;
    std::cout << "Z->Y: " << Z->Y << std::endl;
    std::cout << "-------------------------" << std::endl;
    return 0;
}
