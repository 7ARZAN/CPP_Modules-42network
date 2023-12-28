/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 08:17:34 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/28 16:29:27 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main(){
	Brain *b = new Brain();
	Animal *a = new Animal();
	std::cout << "Brain: " << b->get_ideas(0) << std::endl;
	std::cout << "Brain: " << b->get_ideas(1) << std::endl;
	std::cout << "Brain: " << b->get_ideas(2) << std::endl;
	std::cout << "Brain: " << b->get_ideas(3) << std::endl;
	std::cout << "Animal type: " << a->getType() << std::endl;
	a->makeSound();
	delete a;
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
	Animal *a1 = new Dog();
	std::cout << "Animal type: " << a1->getType() << std::endl;
	a1->makeSound();
	delete a1;
	std::cout << "-------------------------------------" << std::endl;
	Animal *a2 = new Cat();
	std::cout << "Animal type: " << a2->getType() << std::endl;
	a2->makeSound();
	delete a2;
	return 0;
}
