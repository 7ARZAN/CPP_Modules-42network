#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>

template	<typename T>
class PmergeMe
{
	private:
		typedef	std::pair<int,int>		pair_data;
		typedef std::vector<pair_data>	pair_list;
		pair_list			makePairs(const T &listToSort);
		pair_list			sortPairs(pair_list pairs, const T &sortedList);
	public:
		PmergeMe(void);
		~PmergeMe(void);
		void	binaryInsertion(int Number, T &list2Sort);
		T	FordJohnsonAlgorithm(const T &listToSort);
};

 #endif


// #include "PmergeMe.hpp"
//
// template	<typename T>
// PmergeMe<T>::PmergeMe(void){
//
// }
//
// template	<typename T>
// PmergeMe<T>::~PmergeMe(void){
// }
//
// template <typename T>
// typename	PmergeMe<T>::pair_list	PmergeMe<T>::makePairs(const T &list){
// 	pair_data	temp;
// 	pair_list	result;
//
// 	for (int i = 0; i < list.size(); i++)
// 	{
// 		if (!(i % 2))
// 			temp.first = list.at(i);
// 		else
// 		{
// 			if (list.at(i) < temp.first)
// 			{
// 				temp.second = temp.first;
// 				temp.first = list.at(i);
// 			}
// 			else
// 				temp.second = list.at(i);
// 			result.push_back(temp);
// 		}
// 	}
// 	return (result);
// }
//
// template	<typename T>
// typename	PmergeMe<T>::pair_list	PmergeMe<T>::sortPairs(pair_list pairs, const T &sortedList){
// 	pair_list	result;
//
// 	for (int i = 1; i < sortedList.size(); i++){
// 		for (int j = 0; j < pairs.size(); j++){
// 			if (sortedList.at(i) == pairs.at(j).second){
// 				result.push_back(pairs.at(j));
// 				pairs.erase(pairs.begin() + j);
// 			}
// 		}
// 	}
// 	return (result);
// }
//
// template	<class T>
// void	PmergeMe<T>::binaryInsertion(int numberaa, T &list){
// 	for (int i = 0; i < list.size(); i++){
// 		if (list.at(i) >= numberaa){
// 			list.insert(list.begin() + i, numberaa);
// 			return ;
// 		}
// 	}
// 	list.push_back(numberaa);
// }
//
//
// template	<class T>
// T	PmergeMe<T>::FordJohnsonAlgorithm(const T &listToSort){
// 	pair_list		pairs;
// 	T			pending;
// 	T			mainChain;
//
//  	pairs = makePairs(listToSort);
// 	
// 	for (int i = 0; i < pairs.size(); i++){
// 		if (!i)
// 			mainChain.push_back(pairs.at(i).first);
// 		mainChain.push_back(pairs.at(i).second);
// 	}
// 	if (listToSort.size() % 2)
// 		pending.push_back(listToSort.back());
// 	if (mainChain.size() < 3){
// 		if (pending.size())
// 			binaryInsertion(pending.at(0), mainChain);
// 		return (mainChain);
// 	}
// 	mainChain = FordJohnsonSort(mainChain);
// 	pairs = sortPairs(pairs, mainChain);
// 	if (pending.size())
// 		binaryInsertion(pending.at(0), mainChain);
// 	for (int i = 1; i < pairs.size(); i++)
// 		binaryInsertion(pairs.at(i).first, mainChain);
// 	return (mainChain);
// }
//
// int	main(void){
// 	PmergeMe<std::deque<int> >	merger;
// 	std::deque<int>			list;
// 	std::deque<int>			result;
//
// 	list.push_back(5);
// 	list.push_back(3);
// 	list.push_back(2);
// 	list.push_back(4);
// 	list.push_back(1);
// 	list.push_back(6);
// 	list.push_back(7);
//
// 	result = merger.FordJohnsonAlgorithm(list);
// 	for (int i = 0; i < result.size(); i++)
// 		std::cout << result.at(i) << " ";
// 	std::cout << std::endl;
// 	return (0);
// }

