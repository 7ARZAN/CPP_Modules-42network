/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 04:13:02 by elakhfif          #+#    #+#             */
/*   Updated: 2024/08/07 05:33:08 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>

class	PmergeMe
{
	private:
		typedef std::pair<int, int>	pair_info;
		typedef std::vector<pair_info>	pair_vector;

		pair_vector		createPairs(const std::vector<int> &list);
		void			sortPairs(pair_vector &pairs, std::vector<int> &list);
		std::vector<int>	binaryInsertion(int number, std::vector<int> &list);

	public:
		PmergeMe();
		~PmergeMe();

		std::vector<int>	FordJohnsonAlgorithm(std::vector<int> &list2Sort);
};

#endif
