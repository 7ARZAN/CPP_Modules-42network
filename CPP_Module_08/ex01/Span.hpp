/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:42:05 by tarzan            #+#    #+#             */
/*   Updated: 2024/12/23 13:30:50 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>

class	Span{
	private:
		unsigned int	_n;
		unsigned int	index;
		int				*arr;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &src);
		~Span();
		Span &operator=(const Span &src);
	
	void		addNumber(int n);
	int		shortestSpan();
	int		longestSpan();
};

#endif
