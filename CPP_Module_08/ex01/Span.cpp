/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:44:58 by tarzan            #+#    #+#             */
/*   Updated: 2024/12/23 13:31:00 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>

Span::Span() : _n(0){
	arr = new int[0];
	index = 0;
}

Span::Span(unsigned int n) : _n(n){
	arr = new int[n];
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
	int	min;
	std::vector<int> v(arr, arr + _n);
	std::sort(v.begin(), v.end());
	
	min = v[1] - v[0];
	for (unsigned int i = 1; i < _n; i++){
		if (v.at(i) - v.at(i - 1) < min)
			min = v.at(i) - v.at(i - 1);
	}
	return min;
}

int	Span::longestSpan(){
	std::vector<int> v(arr, arr + _n);
	std::sort(v.begin(), v.end());
	return v.at(_n - 1) - v.at(0);
}

