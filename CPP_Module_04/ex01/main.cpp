/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 08:17:34 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/30 01:56:22 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int ft_main(){
	Brain *b = new Brain();
	Animal *a = new Animal();
	std::cout << "Brain: " << b->get_ideas(0) << std::endl;
	std::cout << "Brain: " << b->get_ideas(1) << std::endl;
	std::cout << "Brain: " << b->get_ideas(2) << std::endl;
	std::cout << "Brain: " << b->get_ideas(3) << std::endl;
	std::cout << "Animal type: " << a->getType() << std::endl;
	a->makeSound();
	delete a;
	delete b;
	std::cout << "-------------------------------------" << std::endl;
	Dog *d = new Dog();
	std::cout << "Dog type: " << d->getType() << std::endl;
	d->makeSound();
	delete d;
	std::cout << "-------------------------------------" << std::endl;
	Cat *c = new Cat();
	std::cout << "Cat type: " << c->getType() << std::endl;
	c->makeSound();
	delete c;
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
	return 0;
}

int main(){
	ft_main();
	//while (1);
	return 0;
}
