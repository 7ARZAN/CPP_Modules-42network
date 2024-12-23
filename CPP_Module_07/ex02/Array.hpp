/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:24:14 by elakhfif          #+#    #+#             */
/*   Updated: 2024/12/23 13:28:59 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template	<typename T>

class Array{
	private:
		T		*arr;
		unsigned int	n;
	public:
		Array(){
			this->n = 0;
			this->arr = new T[0];
		};
		Array(unsigned int n){
			this->n = n;
			this->arr = new T[n];
		};
		Array(const Array &src){
				this->n = src.n;
			this->arr = new T[n];
			for (unsigned int i = 0; i < n; i++)
				this->arr[i] = src.arr[i];
		};
		~Array(){
			delete [] arr;
		};
		Array	&operator=(const Array &src){
			if (this == &src)
				return *this;
			delete [] arr;
			this->n = src.n;
			this->arr = new T[n];
			for (unsigned int i = 0; i < n; i++)
				this->arr[i] = src.arr[i];
			return *this;
		}
		T		&operator[](unsigned int i){
			if (i >= n)
				throw std::out_of_range("Out of limits");
			return arr[i];
		};
		unsigned int	size() const{
			return n;
		};
		// class OutOfLimits : public std::exception
		// {
		// 	public:
		// 		virtual const char	*what() const throw();
		// };
};

#endif
