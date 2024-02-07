/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:24:14 by elakhfif          #+#    #+#             */
/*   Updated: 2024/02/07 05:41:21 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template	<typename T>

class Array{
	private:
		T		*arr;
		unsigned int		n;
	public:
		Array();
		Array(unsigned int n){
			this->n = n;
			this->arr = new T[n];
		};
		Array(const Array &src);
		~Array();
		Array	&operator=(const Array &src);
		T		&operator[](unsigned int i);
		unsigned int	size() const;
		class OutOfLimits : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

#endif
