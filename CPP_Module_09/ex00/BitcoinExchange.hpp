/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:20:43 by tarzan            #+#    #+#             */
/*   Updated: 2024/09/04 23:47:31 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP


# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"

# include <iostream>
# include <string>
# include <map>
# include <fstream>
# include <sstream>

class BitcoinExchange
{
	private:
		std::map<std::string, float>	data;

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &src);
		~BitcoinExchange();
		BitcoinExchange	&operator=(BitcoinExchange const &src);

		double	getBitcoinPrice(const std::string &date);
		void	handleTables(const std::string &line);
		float	stringToFloat(const std::string &value);
		bool	isAllDigits(const std::string &value);
		bool	isValidDate(const std::string &date);
		bool	isValidValue(const std::string &value);
		std::string	trim(const std::string &str, const std::string &charList);
};

#endif
