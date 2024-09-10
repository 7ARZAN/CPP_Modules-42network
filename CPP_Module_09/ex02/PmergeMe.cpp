/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 04:38:50 by elakhfif          #+#    #+#             */
/*   Updated: 2024/09/10 05:15:42 by tarzan           ###   ########.fr       */
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
	size_t		index;


	index = 0;
	while (index < list.size()){
		if (index + 1 < list.size())
			pairs.push_back(std::make_pair(list.at(index), list.at(index + 1)));
		else
			pairs.push_back(std::make_pair(list.at(index), -1));
		index += 2;
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
		pair = pairs.at(i);
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
	pair_vector		pairs;

	pairs = createPairs(list2Sort);
	for (size_t i = 0; i < pairs.size(); i++){
		std::cout << "[ " << pairs[i].first << " " << pairs[i].second << " ]" << std::endl;
	}
	sortPairs(pairs, mainChain);
	return (mainChain);
}
