/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:20:43 by tarzan            #+#    #+#             */
/*   Updated: 2024/02/23 06:23:20 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>

class BitcoinExchange{
	public:
		BitcoinExchange() {};
		BitcoinExchange(const BitcoinExchange &src) { *this = src; };
		BitcoinExchange &operator=(const BitcoinExchange &src) { (void)src; return *this; };
		~BitcoinExchange() {};

	private:
		void	check_input(std::string input);
		void	check_date(std::string date);
		void	check_file_format(std::string file);
		void	get_data(std::string file);
		void	get_bitcoin_price(std::string date);
		std::map<std::string, double> data;
		std::string date;
		double price;
};

#endif
