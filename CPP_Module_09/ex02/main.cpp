/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 04:09:19 by elakhfif          #+#    #+#             */
/*   Updated: 2024/02/23 22:06:38 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <chrono>
#include <sstream>

//l is for left index and r is right index of the sub-array of v to be sorted
void	Pmerge_sort(std::vector<int> &v, int l, int r){
	if (l < r){
		int m = l + (r - l) / 2;
		Pmerge_sort(v, l, m);
		Pmerge_sort(v, m + 1, r);
		std::vector<int> L(v.begin() + l, v.begin() + m + 1);
		std::vector<int> R(v.begin() + m + 1, v.begin() + r + 1);
		int i = 0;
		int j = 0;
		int k = l;
		while (i < L.size() && j < R.size()){
			if (L[i] <= R[j]){
				v[k] = L[i];
				i++;
			}
			else{
				v[k] = R[j];
				j++;
			}
			k++;
		}
		while (i < L.size()){
			v[k] = L[i];
			i++;
			k++;
		}
		while (j < R.size()){
			v[k] = R[j];
			j++;
			k++;
		}
	}
}

int Pmerge_sort(char **av, int ac){
	std::vector<int> v;
	std::vector<int> v2;
	std::string str;
	std::stringstream ss;
	std::chrono::time_point<std::chrono::system_clock> start, end;

	for (int i = 0; i < ac; i++){
		str = av[i];
		if (str.find_first_not_of("0123456789") != std::string::npos)
			return (std::cerr << "Error: invalid input" << std::endl, 1);
		v.push_back(std::atoi(av[i]));
	}
	v2 = v;
	std::sort(v2.begin(), v2.end());
	std::cout << "Unsorted: ";
	for (int i = 0; i < ac; i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;
	start = std::chrono::system_clock::now();
	Pmerge_sort(v, 0, ac - 1);
	end = std::chrono::system_clock::now();
	std::cout << "Sorted: ";
	for (int i = 0; i < ac; i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;
	std::cout << "Time used by the merge sort algorithm: " << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() << " microseconds" << std::endl;
	start = std::chrono::system_clock::now();
	Pmerge_sort(v2, 0, ac - 1);
	end = std::chrono::system_clock::now();
	std::cout << "Time used by the std::sort algorithm: " << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() << " microseconds" << std::endl;
	return (0);
}

int	main(int ac, char **av){
	if (ac < 2)
		return (std::cerr << "Usage: " << av[0] << " \"[numbers to sort]\"" << std::endl, 1);
	return (Pmerge_sort(av + 1, ac - 1));
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


				•TODO :
- try to implement insert-merge sort algorithm.
- read about ford johnson algorithm.
- compare the time between the two algorithms.
- check if the input is a sequence of numbers.
- check if the input is a sequence of positive numbers.
- handle the errors and display the error message.
*/

