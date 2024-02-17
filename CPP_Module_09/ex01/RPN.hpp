/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:39:54 by tarzan            #+#    #+#             */
/*   Updated: 2024/02/17 17:35:04 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>

class	RPN{
	private:
		std::string		_input;
		std::stack<int>	_stack;
		int				_result;
		bool			_error;
		bool			_isNumber(const std::string &s);
		bool			_isOperator(const std::string &s);
		void			_calculate(const std::string &s);
		void			_printStack();
		void			_printError();
		void			_printResult();
	public:
		RPN();
		~RPN();
		RPN(const RPN &src);
		RPN				&operator=(const RPN &src);

		void			setInput(const std::string &input);
		void			calculate();
		int				getResult();
		bool			getError();
		void			printResult();
		void			printError();
		void			printStack();
		void			printAll();
		static void	parseExpression(std::string expression);
		static void	printResult(std::string expression);
};

#endif
