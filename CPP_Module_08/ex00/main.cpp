/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:36:57 by tarzan            #+#    #+#             */
/*   Updated: 2024/06/18 18:20:14 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int	main(){
	std::vector<int>	vector;
	vector.push_back(1);
	vector.push_back(2);
	vector.push_back(3);
	vector.push_back(4);
	vector.push_back(5);
	try{
		easyfind(vector, 4);
		std::cout << "value is: " << easyfind(vector, 4) << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	try{
		easyfind(vector, 1);
		std::cout << "value is: " << easyfind(vector, 1) << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	return 0;
}
