/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:44:58 by tarzan            #+#    #+#             */
/*   Updated: 2024/09/01 05:40:38 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>

Span::Span(unsigned int n) : _n(n){
	arr = new int[n]; //here we allocate memory for the array of integers
	index = 0;
}

Span::Span(const Span &src){
	*this = src;
}

Span::~Span(){
	delete [] arr;
}

Span &Span::operator=(const Span &src) {
	if (this != &src)
		*this = src;
	return *this;
}

void	Span::addNumber(int number){
	if (index < _n){
		arr[index] = number;
		index++;
	}
	else
		throw std::exception();
}

int	Span::shortestSpan(){
	std::vector<int> v(arr, arr + _n);
	std::sort(v.begin(), v.end());
	int min = v[1] - v[0];
	for (unsigned int i = 1; i < _n; i++){
		if (v[i] - v[i - 1] < min)
			min = v[i] - v[i - 1];
	}
	return min;
}

int	Span::longestSpan(){
	std::vector<int> v(arr, arr + _n);
	std::sort(v.begin(), v.end());
	return v[_n - 1] - v[0];
}

