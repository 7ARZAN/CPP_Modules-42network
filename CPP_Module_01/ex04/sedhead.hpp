/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sedhead.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 03:56:41 by elakhfif          #+#    #+#             */
/*   Updated: 2023/11/24 03:59:54 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDHEAD_HPP
#define SEDHEAD_HPP

#include <iostream>
#include <fstream>
#include <string>

class Sed{
	private:
		std::string _filename;
		std::string _s1;
		std::string _s2;
		std::string _buffer;
	public:
		Sed();
		Sed(std::string filename, std::string s1, std::string s2);
		~Sed();

		void replace();
		void replace(std::string filename, std::string s1, std::string s2);
		void replace(std::string s1, std::string s2);
		void replace(std::string s2);
};

#endif

