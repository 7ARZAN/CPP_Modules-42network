/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 01:22:40 by elakhfif          #+#    #+#             */
/*   Updated: 2024/12/24 19:04:25 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ABClasses.hpp"

Base*	generate(void){
	int	i;

	i = random_rand();
	switch (i){
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
		default:
			break;
	}
	return NULL;
}

int	random_rand(void){
	srand(time(NULL));
	return rand() % 3;
}

void	identify(Base *p){
	if (dynamic_cast<A*>(p))
		std::cout << "A" << '\n';
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << '\n';
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << '\n';
}

void	identify(Base &p){
	try{
		A	&a = dynamic_cast<A&>(p);
		std::cout << "A" << '\n';
		(void)	a;
	}catch(const std::exception& e){
	}
	try{
		B	&b = dynamic_cast<B&>(p);
		std::cout << "B" << '\n';
		(void)	b;
	}catch(const std::exception& e){
	}
	try{
		C	&c = dynamic_cast<C&>(p);
		std::cout << "C" << '\n';
		(void)	c;
	}catch(const std::exception& e){
	}
}
