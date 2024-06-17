/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 04:38:50 by elakhfif          #+#    #+#             */
/*   Updated: 2024/06/17 20:00:08 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){
	std::cout << "PmergeMe constructor called" << std::endl;
}

PmergeMe::~PmergeMe(){
	std::cout << "PmergeMe destructor called" << std::endl;
}

std::vector<int>	PmergeMe::binaryInsertionSort(int number, std::vector<int> &list){
	std::vector<int>	result;
	int		low = 0;
	int		high = list.size() - 1;
	int		mid;
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
	return result;
}

PmergeMe::pair_vector	PmergeMe::createPairs(const std::vector<int> &list){
	pair_vector	pairs;

	for (int i = 0; i < list.size(); i += 2){
		if (i + 1 < list.size())
			pairs.push_back(std::make_pair(list[i], list[i + 1]));
		else
			pairs.push_back(std::make_pair(list[i], -1));
	}
	return pairs;
}

void	PmergeMe::sortPairs(pair_vector &pairs, std::vector<int> &list){
	std::vector<int>	result;
	for (pair_info &pair : pairs){
		if (pair.second == -1)
			result = binaryInsertionSort(pair.first, result);
		else
			result = binaryInsertionSort(pair.first, result);
		if (pair.second != -1)
			result = binaryInsertionSort(pair.second, result);
	}
	list = result;
}

std::vector<int>	PmergeMe::FordJohnson(std::vector<int> &list){
	if (list.size() < 1)
		return list;
	pair_vector	pairs = createPairs(list);
	for (int i = 0; i < pairs.size(); i++){
		std::cout << "Pairs are: " << pairs[i].first << " " << pairs[i].second << std::endl;
	}
	sortPairs(pairs, list);
	return list;
}
