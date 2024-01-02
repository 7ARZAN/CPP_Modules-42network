/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 08:17:34 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/02 22:27:35 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	//const Animal* meta = new Animal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	//std::cout << "meta->getType(): " << meta->getType() << std::endl;
	std::cout << "j->getType(): " << j->getType() << std::endl;
	std::cout << "i->getType(): " << i->getType() << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	//meta->makeSound();
	//delete meta;
	delete j;
	delete i;
	std::cout << "----------------------------------------" << std::endl;
	AAnimal *animals[10];
	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();
	for (int i = 0; i < 10; i++)
		delete animals[i];
	std::cout << "----------------------------------------" << std::endl;
	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();
	std::cout << "dog->getType(): " << dog->getType() << std::endl;
	std::cout << "cat->getType(): " << cat->getType() << std::endl;
	delete dog;//should not create a leak
	delete cat;
	std::cout << "----------------------------------------" << std::endl;
	return 0;
}
