/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 03:48:00 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/10 02:23:51 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

// int ft_main(){
//     // IMateriaSource* src = new MateriaSource(); 
//     // src->learnMateria(new Ice());
//     // src->learnMateria(new Cure());
//     // ICharacter* me = new Character("me");
//     // AMateria* tmp;
//     // tmp = src->createMateria("ice");
//     // me->equip(tmp);
//     // tmp = src->createMateria("cure");
//     // me->equip(tmp);
//     // ICharacter* bob = new Character("bob");
//     // ICharacter* bob1 = new Character("bob2");
//     // me->use(0, *bob);
//     // me->use(1, *bob);
//     // me->use(1, *bob1);
//     // delete bob;
//     // delete bob1;
//     // delete me;
//     // delete src;
//
//
//
//
//     
// 	IMateriaSource* src = new MateriaSource();
//
// 	src->learnMateria(new Ice());
// 	ICharacter* me = new Character("tarzan");
// 	 AMateria* tmp;
// 	tmp = src->createMateria("cure");
// 	// me->equip(tmp);
// 	// tmp = src->createMateria("ice");
// 	// me->equip(tmp);
// 	// tmp = src->createMateria("cure");
// 	// me->equip(tmp);
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	me->unequip(0);
// 	me->use(0, *me);
// 	delete me;
// 	delete src;
// 	delete tmp;
// 	// me->use(1, *me);
// 	// me->use(2, *me);
// 	// me->use(3, *me);
// 	//
// 	// std::cout << " ------------------------------------ " << std::endl;
// 	// ICharacter* bob = new Character("bob");
// 	// me->use(0, *bob);
// 	// me->use(1, *bob);
// 	//
// 	//
// 	//
// 	// system("leaks Interface");
// 	
// 	return 0;
// }

int ft_main(){
	Ice * meme = new Ice();
	printf("new ice[a] ptr %p\n", meme);
	delete meme;
	Ice * khtek = new Ice();
	printf("new ice[b] ptr %p\n", khtek);
	delete khtek;
	return (0);
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// {
	// 	ICharacter* me = new Character("me");
	// 	AMateria* tmp;
	// 	tmp = src->createMateria("ice");
	// 	me->equip(tmp);
	// 	me->unequip(0);
	// 	me->equip(tmp);
	// 	me->unequip(0);
	// 	delete me;
	// }
	// ICharacter* bob = new Character("bob");
	// // me->use(1, *bob);
	// // me->use(1, *bob);
	// delete bob;
	// delete src;
 // 	//system("leaks Interface");
	// return 0;
}

int	main(){
	ft_main();
  	system("leaks Interface");
	return 0;
}
