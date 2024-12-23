/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 08:17:34 by elakhfif          #+#    #+#             */
/*   Updated: 2024/12/23 13:16:22 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int ft_main(){
	Brain *b = new Brain();
	//Animal test;
	delete b;
	std::cout << "-------------------------------------" << std::endl;
	Dog *d = new Dog();
	std::cout << "Dog type: " << d->getType() << std::endl;
	d->makeSound();
	delete d;
	std::cout << "-------------------------------------" << std::endl;
	Cat *c = new Cat();
	Cat *s = new Cat();


	std::cout << "Cat type: " << c->getType() << std::endl;
	c->makeSound();
	*s = *c;
	delete c;
	delete s;

	std::cout << "-------------------------------------" << std::endl;
	Animal *animal[10];
	for (int i = 0; i < 10; i++){
		if (i % 2 == 0)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}
	for (int i = 0; i < 10; i++){
		std::cout << "Animal type: " << animal[i]->getType() << std::endl;
		animal[i]->makeSound();
		delete animal[i];
	}
	std::cout << "-------------------------------------" << std::endl;
	Dog *dog = new Dog();
	Dog *dog2 = new Dog();

	*dog = *dog2;

	delete dog;
	delete dog2;

	return 0;
}

// int ft_main()
// {    
//     Dog *d = new Dog();
//     Brain b;
//     Dog *c = new Dog(&b);
//     
//     *d = *c;
//     delete c;
//     delete d;
//     return 0;
// }

int	main()
{
	ft_main();
	//while (1);
	return 0;
}
