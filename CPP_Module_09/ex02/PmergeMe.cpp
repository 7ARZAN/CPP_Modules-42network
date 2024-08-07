/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 04:38:50 by elakhfif          #+#    #+#             */
/*   Updated: 2024/08/07 05:41:54 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){
}

PmergeMe::~PmergeMe(){
}

std::vector<int>	PmergeMe::binaryInsertion(int number, std::vector<int> &list){
	std::vector<int>	result;
	int			low;
	int			high;
	int			mid;

	low = 0;
	high = list.size() - 1;
	while (low <= high){
		mid = (low + high) / 2;
		if (list[mid] < number)
			low = mid + 1;
		else
			high = mid - 1;
	}
	result.insert(result.begin(), list.begin(), list.begin() + low);
	result.push_back(number);
	result.insert(result.end(), list.begin() + low, list.end());
	return (result);
}

PmergeMe::pair_vector	PmergeMe::createPairs(const std::vector<int> &list){
	pair_vector	pairs;

	for (size_t i = 0; i < list.size(); i += 2){
		if (i + 1 < list.size())
			pairs.push_back(std::make_pair(list[i], list[i + 1]));
		else
			pairs.push_back(std::make_pair(list[i], -1));
	}
	// for (size_t i = 0; i < pairs.size(); i++){
	// 	std::cout << "[ " << pairs[i].first << " " << pairs[i].second << " ]" << std::endl;
	// }
	return (pairs);
}

void	PmergeMe::sortPairs(pair_vector &pairs, std::vector<int> &list){
	std::vector<int>	mainChain;
	std::pair<int, int>	pair;
	size_t		i;

	i = 0;
	while (i < pairs.size()){
		pair = pairs[i];
		if (pair.second == -1){
			mainChain.push_back(pair.first);
			i++;
		}
		else
		{
			if (pair.first < pair.second){
				mainChain.push_back(pair.first);
				mainChain.push_back(pair.second);
			}
			else{
				mainChain.push_back(pair.second);
				mainChain.push_back(pair.first);
			}
			i++;
		}
	}
	list = mainChain;
	// for (size_t i = 0; i < list.size(); i++){
	// 	std::cout << list[i] << " ";
	// }
	// std::cout << std::endl;
}

std::vector<int>	PmergeMe::FordJohnsonAlgorithm(std::vector<int> &list2Sort){
	std::vector<int>	mainChain;
	std::vector<int>	pending;
	pair_vector		pairs;
	
	pairs = createPairs(list2Sort);
	for (size_t i = 0; i < pairs.size(); i++){
		if (pairs[i].second == -1)
			pending.push_back(pairs[i].first);
	}
	sortPairs(pairs, mainChain);
	while (pending.size() > 0){
		mainChain = binaryInsertion(pending[0], mainChain);
		pending.erase(pending.begin());
	}
	for (size_t i = 0; i < mainChain.size(); i++){
		std::cout << mainChain[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "----------------------" << std::endl;

	for (size_t i = 0; i < list2Sort.size(); i++){
		std::cout << list2Sort[i] << " ";
	}
	std::cout << std::endl;
	return (mainChain);
}
