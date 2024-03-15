/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:36:57 by tarzan            #+#    #+#             */
/*   Updated: 2024/03/15 22:18:38 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	easy_rand(){
	int	value = rand() % 1000;
	std::cout << "Random number: " << value << std::endl;
	return value;
}

void	multi_numbers(Span &sp, unsigned int n){
	for (unsigned int i = 0; i < n; i++)
		sp.addNumber(easy_rand());
}
int main(){
	Span sp = Span(9);
	// sp.addNumber(5);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);
	multi_numbers(sp, 9);
	std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	return 0;
}
