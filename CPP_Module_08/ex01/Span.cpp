/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:44:58 by tarzan            #+#    #+#             */
/*   Updated: 2024/02/10 12:56:26 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>

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
}

void	Span::addNumber(int number){
}

int	Span::shortestSpan(){
}

int	Span::longestSpan(){
}

