/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 04:09:19 by elakhfif          #+#    #+#             */
/*   Updated: 2024/02/19 04:38:41 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av){
	if (ac < 2)
		return (std::cerr << "Usage: " << av[0] << " \"[numbers to sort]\"" << std::endl, 1);
	//return (Pmerge_sort(av + 1, ac - 1));
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

