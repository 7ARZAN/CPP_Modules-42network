/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:50:44 by tarzan            #+#    #+#             */
/*   Updated: 2024/02/12 09:06:22 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template	<typename T>

class	MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {};
		MutantStack(const MutantStack &src) : std::stack<T>(src) {};
		~MutantStack() {};
		MutantStack &operator=(const MutantStack &src){
			if (this != &src)
				std::stack<T>::operator=(src);
			return (*this);
		};
		//lets make our iterator class
		class iterator{
			public:
				iterator(typename std::stack<T>::container_type::iterator it) : _it(it) {};
				iterator(const iterator &src) : _it(src._it) {};
				~iterator() {};
				iterator &operator=(const iterator &src){
					if (this != &src)
						_it = src._it;
					return (*this);
				};
				iterator &operator++(){
					_it++;
					return (*this);
				};
				iterator &operator--(){
					_it--;
					return (*this);
				};
				T &operator*(){
						return (*_it);
				};
				bool operator!=(const iterator &src){
					if (_it != src._it)
						return (true);
					return (false);
				};
			private:
				typename std::stack<T>::container_type::iterator _it;
		};
		iterator begin(){
			if (std::stack<T>::c.size() > 0)
				return (iterator(std::stack<T>::c.begin()));
			return (iterator(std::stack<T>::c.end()));
		};
		iterator end(){
			if (std::stack<T>::c.size() > 0)
				return (iterator(std::stack<T>::c.end()));
			return (iterator(std::stack<T>::c.end()));
		};
};

#endif
