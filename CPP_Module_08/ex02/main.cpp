/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:36:57 by tarzan            #+#    #+#             */
/*   Updated: 2024/02/10 18:26:22 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


int	main(){
	MutantStack<int>	mstack;

	mstack.push(10);
	mstack.push(20);
	mstack.push(30);
	mstack.push(40);
	mstack.push(50);
	std::cout << "Top: " << mstack.top() << std::endl;
	std::cout << "Size: " << mstack.size() << std::endl;
	std::cout << "Empty: " << mstack.empty() << std::endl;
	mstack.pop();
	mstack.pop();
	mstack.pop();
	std::cout << "Top: " << mstack.top() << std::endl;
	std::cout << "Size: " << mstack.size() << std::endl;
	std::cout << "Empty: " << mstack.empty() << std::endl;
	std::cout << "Iterating through the stack: " << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite){
		std::cout << *it << std::endl;
		++it;
	}
	return 0;
}
