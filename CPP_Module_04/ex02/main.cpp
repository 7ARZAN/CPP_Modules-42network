/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 08:17:34 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/28 23:27:36 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "meta->getType(): " << meta->getType() << std::endl;
	std::cout << "j->getType(): " << j->getType() << std::endl;
	std::cout << "i->getType(): " << i->getType() << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	std::cout << "----------------------------------------" << std::endl;
	Animal *animals[10];
	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();
	for (int i = 0; i < 10; i++)
		delete animals[i];
	std::cout << "----------------------------------------" << std::endl;
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << "dog->getType(): " << dog->getType() << std::endl;
	std::cout << "cat->getType(): " << cat->getType() << std::endl;
	delete dog;//should not create a leak
	delete cat;
	std::cout << "----------------------------------------" << std::endl;
	Dog dog1;
	Dog dog2;
	dog1.set_ideas(0, "I am dog1");
	dog2.set_ideas(0, "I am dog2");
	std::cout << dog1.get_ideas(0) << std::endl;
	std::cout << dog2.get_ideas(0) << std::endl;
	dog1 = dog2;
	std::cout << dog1.get_ideas(0) << std::endl;
	std::cout << dog2.get_ideas(0) << std::endl;
	dog1.set_ideas(0, "I am dog1");
	dog2.set_ideas(0, "I am dog2");
	std::cout << dog1.get_ideas(0) << std::endl;
	std::cout << dog2.get_ideas(0) << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	Cat cat1;
	Cat cat2;
	cat1.set_ideas(0, "I am cat1");
	cat2.set_ideas(0, "I am cat2");
	std::cout << cat1.get_ideas(0) << std::endl;
	std::cout << cat2.get_ideas(0) << std::endl;
	cat1 = cat2;
	std::cout << cat1.get_ideas(0) << std::endl;
	std::cout << cat2.get_ideas(0) << std::endl;
	cat1.set_ideas(0, "I am cat1");
	cat2.set_ideas(0, "I am cat2");
	std::cout << cat1.get_ideas(0) << std::endl;
	std::cout << cat2.get_ideas(0) << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	return 0;
}
