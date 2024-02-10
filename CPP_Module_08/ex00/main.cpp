/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:36:57 by tarzan            #+#    #+#             */
/*   Updated: 2024/02/10 12:41:07 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int	main(){
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	try{
		easyfind(v, 4);
		std::cout << "value is: " << easyfind(v, 4) << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	try{
		easyfind(v, 1);
		std::cout << "value is: " << easyfind(v, 1) << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	return 0;
}
