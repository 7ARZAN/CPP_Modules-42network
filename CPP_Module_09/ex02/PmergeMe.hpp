/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 04:13:02 by elakhfif          #+#    #+#             */
/*   Updated: 2024/09/10 06:43:00 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <deque>

template	<typename T>
class	PmergeMe
{
	private:
		typedef std::pair<int, int>	pair_info;
		typedef std::vector<pair_info>	pair_vector; // vector of pairs [first, second] but template can be changed to any type

		pair_vector	createPairs(const T &list);
		pair_vector	sortPairs(pair_vector pairs, const T& sortedList);

	public:
		PmergeMe();
		~PmergeMe();
		void		binaryInsertion(int number, const T& list2Sort);
		T		FordJohnsonAlgorithm(const T& list2Sort);
};

#endif
