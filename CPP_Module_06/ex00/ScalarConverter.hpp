/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 02:20:14 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/28 02:36:35 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <sstream>

class	ScalarConverter{
	private:
		std::string _str;
		int _precision;
		ScalarConverter();
	public:
		ScalarConverter(std::string str);
		ScalarConverter(ScalarConverter const & src);
		~ScalarConverter();
		ScalarConverter & operator=(ScalarConverter const & rhs);
		void convert();
		void toChar();
		void toInt();
		void toFloat();
		void toDouble();
		class NonDisplayableException: public std::exception{
			public:
				virtual const char* what() const throw();
		};
		class ImpossibleException: public std::exception{
			public:
				virtual const char* what() const throw();
		};
};

#endif
