/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:28:44 by tarzan            #+#    #+#             */
/*   Updated: 2024/12/24 19:34:09 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::~RPN(){
	std::cout << "Reverse Polish Notation: GoodBye!" << '\n';
}

RPN::RPN(){
	std::cout << "Reverse Polish Notation: Hello, Welcome to RPN!" << '\n';
}

RPN::RPN(const RPN &src){
	(void)src;
}

RPN &RPN::operator=(const RPN &src){
	(void)src;
	return (*this);
}

bool	RPN::is_num(std::string str){
	for (size_t i = 0; i < str.length(); i++)
		if (!isdigit(str[i]) || str.length() > 1)
			return (false);
	return (true);
}

bool	RPN::is_operator(char c){
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

bool	RPN::checkExpression(std::string str){
	std::stack<int> stack;
	std::string token;
	size_t i = 0;
	while (i < str.length()){
		if (str[i] == ' '){
			i++;
			continue;
		}
		token = "";
		while (i < str.length() && str[i] != ' '){
			token += str[i];
			i++;
		}
		if (is_num(token))
			stack.push(atoi(token.c_str()));
		else if (is_operator(token[0])){
			if (stack.size() < 2)
				return (std::cerr << "Invalid expression" << std::endl, false);
			stack.pop();
			stack.pop();
			stack.push(1);
		}
		else
			return (std::cerr << "Invalid expression" << std::endl, false);
	}
	if (stack.size() != 1)
		return (std::cerr << "Invalid expression" << std::endl, false);
	return (true);
}

void	RPN::calculator(std::string str){
	if (!checkExpression(str))
		return ;
	std::stack<int>	stack;
	std::string	token;
	size_t		i;

	i = 0;
	while (i < str.length()){
		if (str[i] == ' '){
			i++;
			continue;
		}
		token = "";
		while (i < str.length() && str[i] != ' '){
			token += str.at(i);
			i++;
		}
		if (is_num(token))
			stack.push(atoi(token.c_str()));
		else if (is_operator(token[0])){
			if (stack.size() < 2){
				std::cerr << "Invalid expression" << std::endl;
				return ;
			}
			int a = stack.top();
			stack.pop();
			int b = stack.top(); 
			stack.pop();
			if (token[0] == '+')
				stack.push(b + a);
			else if (token[0] == '-')
				stack.push(b - a);
			else if (token[0] == '*')
				stack.push(b * a);
			else if (token[0] == '/'){
				if (a == 0){
					std::cerr << "hmm, u cant divide by 0" << std::endl;
					return ;
				}
				stack.push(b / a);
			}
		}
	}
	std::cout << stack.top() << std::endl;
}
