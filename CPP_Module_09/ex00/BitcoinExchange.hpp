/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:20:43 by tarzan            #+#    #+#             */
/*   Updated: 2024/02/12 23:11:33 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>

class BitcoinExchange
{
	public:
		BitcoinExchange() {};
		BitcoinExchange(const BitcoinExchange &src) { *this = src; };
		BitcoinExchange &operator=(const BitcoinExchange &src) { (void)src; return *this; };
		~BitcoinExchange() {};

		void	loadBitcoinList(std::string const &filename);
		void	displayBitcoinList() const;
		// void	removeBitcoin(std::string const &name);
		// void	updateBitcoin(std::string const &name, double price);
		// double	getBitcoinPrice(std::string const &name) const;
		// std::map<std::string, double> getBitcoinList() const;

	private:
		std::map<std::string, double> bitcoinList;
};

#endif
