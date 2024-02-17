/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:41:20 by tarzan            #+#    #+#             */
/*   Updated: 2024/02/17 17:40:42 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>
#include <string>
#include <stack>

bool	check_expression(std::string expression){
	int count = 0;
	for (int i = 0; i < expression.length(); i++){
		if (expression[i] == '('){
			count++;
		}
		else if (expression[i] == ')'){
			count--;
		}
	}
	if (count != 0){
		std::cerr << "Error: Invalid expression" << std::endl;
		return (false);
	}
	return (true);
}

void	RPN::parseExpression(std::string expression){
	std::stack<char> stack;
	std::string result;

	if (!check_expression(expression)){
		return;
	}
	for (int i = 0; i < expression.length(); i++){
		if (expression[i] >= '0' && expression[i] <= '9'){
			result += expression[i];
		}
		else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/'){
			while (!stack.empty() && stack.top() != '('){
				result += stack.top();
				stack.pop();
			}
			stack.push(expression[i]);
		}
		else if (expression[i] == '('){
			stack.push(expression[i]);
		}
		else if (expression[i] == ')'){
			while (!stack.empty() && stack.top() != '('){
				result += stack.top();
				stack.pop();
			}
			stack.pop();
		}
	}
	while (!stack.empty()){
		result += stack.top();
		stack.pop();
	}
}

//lets print the result of the expression in RPN
void	RPN::printResult(std::string expression){
	std::stack<int> stack;
	int result = 0;

	for (int i = 0; i < expression.length(); i++){
		if (expression[i] >= '0' && expression[i] <= '9'){
			stack.push(expression[i] - '0');
		}
		else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/'){
			int a = stack.top();
			stack.pop();
			int b = stack.top();
			stack.pop();
			if (expression[i] == '+'){
				stack.push(b + a);
			}
			else if (expression[i] == '-'){
				stack.push(b - a);
			}
			else if (expression[i] == '*'){
				stack.push(b * a);
			}
			else if (expression[i] == '/'){
				stack.push(b / a);
			}
		}
	}
	result = stack.top();
	stack.pop();
	std::cout << "Result: " << result << std::endl;
}

int	main(int ac, char **av){
	if (ac != 2){
		std::cerr << "Usage: " << av[0] << " \"ur expression\"" << std::endl;
		return (EXIT_FAILURE);
	}
	RPN::parseExpression(av[1]);
	RPN::printResult(av[1]);
	return (EXIT_SUCCESS);
}
