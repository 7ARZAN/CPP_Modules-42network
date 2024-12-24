/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 04:38:50 by elakhfif          #+#    #+#             */
/*   Updated: 2024/12/24 19:35:18 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <ctime>

template	<typename T>
PmergeMe<T>::PmergeMe(){
	timer = 0;
	std::cout << "PmergeMe: Hello, Welcome to PmergeMe!" << '\n';
}

template	<typename T>
PmergeMe<T>::~PmergeMe(){
	std::cout << "PmergeMe: GoodBye!" << '\n';
}

template	<class T>
void	PmergeMe<T>::binaryInsertion(int number, T &sortedList){
	size_t	low;
	size_t	high;
	size_t	mid;

	low = 0;
	high = sortedList.size();
	while (low < high){
		mid = (low + high) / 2;
		if (number < sortedList.at(mid))
			high = mid;
		else
			low = mid + 1;
	}
	sortedList.insert(sortedList.begin() + low, number);
}

template	<typename T>
typename	PmergeMe<T>::pair_vector	PmergeMe<T>::createPairs(const T& list){
	pair_vector	pairs;
	pair_info	holder;
	size_t		index;


	index = -1;
	while (++index < list.size()){
		if (index % 2 == 0)
			holder.first = list[index];
		else
		{
			if (list[index] < holder.first){
				holder.second = holder.first;
				holder.first = list[index];
			}
			else
				holder.second = list[index];
			pairs.push_back(holder);
		}
	}
	return (pairs);
}

template	<typename T>
typename	PmergeMe<T>::pair_vector	PmergeMe<T>::sortPairs(pair_vector pairs, const T &list){
	pair_vector	sortedPairs;
	size_t		index;
	size_t		i;

	index = -1;
	while (++index < list.size()){
		i = -1;
		while (++i < pairs.size()){
			if (list.at(index) == pairs[i].second){
				sortedPairs.push_back(pairs[i]);
				pairs.erase(pairs.begin() + i);
			}
		}
	}
	return (sortedPairs);
}

template	<typename T>
T	PmergeMe<T>::FordJohnsonAlgorithm(const T& list2Sort){
	clock_t		end;
	clock_t		start;
	size_t		index;
	pair_vector	pairs;
	T		mainChain;
	T		pendingList;

	start = clock();
	pairs = createPairs(list2Sort);
	index = -1;
	while (++index < pairs.size()){
		if (index == 0)
			mainChain.push_back(pairs[index].first);
		mainChain.push_back(pairs[index].second);
	}
	if (list2Sort.size() % 2)
		pendingList.push_back(list2Sort.back());
	if (mainChain.size() < 3){
		if (pendingList.size())
			binaryInsertion(pendingList.at(0), mainChain);
		return (mainChain);
	}
	pairs = sortPairs(pairs, mainChain);
	mainChain = FordJohnsonAlgorithm(mainChain);
	if (pendingList.size())
		binaryInsertion(pendingList.at(0), mainChain);
	index = 0;
	while (++index < pairs.size())
		binaryInsertion(pairs[index].first, mainChain);
	end = clock();
	timer = (double)(end - start) * 100 / CLOCKS_PER_SEC;
	return (mainChain);
}

template	class PmergeMe<std::vector<int> >;
template	class PmergeMe<std::deque<int> >;
