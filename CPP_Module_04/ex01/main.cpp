/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 08:17:34 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/28 16:40:26 by elakhfif         ###   ########.fr       */
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
	return 0;
}

int main(){
	ft_main();
	//while (1);
	return 0;
}
