/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:50:44 by tarzan            #+#    #+#             */
/*   Updated: 2024/09/01 07:00:21 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <vector>

template	<typename T>

class	MutantStack : public std::stack<T, std::vector<int> >
{
	public:
		MutantStack() : std::stack<T, std::vector<int> >() {};
		MutantStack(const MutantStack &src) : std::stack<T, std::vector<int> >(src) {};
		~MutantStack() {};
		MutantStack &operator=(const MutantStack &src){
			if (this != &src)
				std::stack<T>::operator=(src);
			return (*this);
		};

		typedef typename	std::stack<T, std::vector<int> >::container_type::iterator	iterator;
		iterator	begin(){
			return (this->c.begin());
		}
		iterator	end(){
			return (this->c.end());
		}
};

#endif
