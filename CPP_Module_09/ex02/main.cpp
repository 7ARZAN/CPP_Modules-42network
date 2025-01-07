/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 04:09:19 by elakhfif          #+#    #+#             */
/*   Updated: 2024/09/11 01:53:30 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename T>
double	PmergeMe<T>::getTime(){
	return timer;
}

int	main(int ac, char **av){
	std::vector<int>	mainChain;
	std::deque<int>		dequemainChain;


	if (ac < 2){
		std::cerr << "Error: No arguments provided" << std::endl;
		return (EXIT_FAILURE);
	}
	for (int i = 1; i < ac; i++){
		if (std::atoi(av[i]) < 0 || std::isdigit(av[i][0]) == 0){
			std::cerr << "Error: Negative number provided" << std::endl;
			return (EXIT_FAILURE);
		}
		mainChain.push_back(std::atoi(av[i]));
		dequemainChain.push_back(std::atoi(av[i]));
	}
	PmergeMe<std::vector<int> >	vec;
	PmergeMe<std::deque<int> >	deq;

	std::cout << "Before: ";
	for (size_t i = 0; i < mainChain.size(); i++){
		std::cout << mainChain[i] << " ";
	}
	std::cout << std::endl;
	std::vector<int>	sortedList = vec.FordJohnsonAlgorithm(mainChain);
	std::deque<int>		deqsortedList = deq.FordJohnsonAlgorithm(dequemainChain);
	std::cout << "After: ";
	for (size_t i = 0; i < sortedList.size(); i++){
		std::cout << sortedList[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Time to process a range of " << mainChain.size() << " elements with std::vector : " << vec.getTime() << " us\n";
	std::cout << "Time to process a range of " << dequemainChain.size() << " elements with std::deque : " << deq.getTime() << " us\n";
	return (EXIT_SUCCESS);
}


/*				SUBJECT:
• Your program must be able to use a positive integer sequence as argument.
• Your program must use the merge-insert sort algorithm to sort the positive integer
sequence.
• If an error occurs during program execution, an error message should be displayed
on the standard output.



				GUIDELINES:
Here are some additional guidelines on the information you should display line by line
on the standard output:
• On the first line you must display an explicit text followed by the unsorted positive
integer sequence.
• On the second line you must display an explicit text followed by the sorted positive
integer sequence.
• On the third line you must display an explicit text indicating the time used by
your algorithm by specifying the first container used to sort the positive integer
sequence.
• On the last line you must display an explicit text indicating the time used by
your algorithm by specifying the second container used to sort the positive integer
sequence.


				WARNING:
• To clarify, yes, you need to use the Ford-Johnson algorithm.
*/
