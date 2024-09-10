/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 04:38:50 by elakhfif          #+#    #+#             */
/*   Updated: 2024/09/10 06:39:28 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template	<typename T>
PmergeMe<T>::PmergeMe(){
}

template	<typename T>
PmergeMe<T>::~PmergeMe(){
}

template	<class T>
void	PmergeMe<T>::binaryInsertion(int number, const T& list2Sort){
	size_t		low;
	size_t		high;
	size_t		mid;

	low = 0;
	high = list2Sort.size() - 1;
	while (low <= high){
		mid = (low + high) / 2;
		if (list2Sort.at(mid) < number)
			low = mid + 1;
		else
			high = mid - 1;
	}
	list2Sort.insert(list2Sort.begin() + low, number);
}

template	<typename T>
typename	PmergeMe<T>::pair_vector	PmergeMe<T>::createPairs(const T& list){
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

template	<typename T>
typename	PmergeMe<T>::pair_vector	PmergeMe<T>::sortPairs(pair_vector pairs, const T &sortedList){

}

template	<typename T>
T	PmergeMe<T>::FordJohnsonAlgorithm(const T& list2Sort){

}
