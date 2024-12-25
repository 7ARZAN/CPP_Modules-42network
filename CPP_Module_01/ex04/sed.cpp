/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 03:56:30 by elakhfif          #+#    #+#             */
/*   Updated: 2024/12/25 17:29:05 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sedhead.hpp"

Sed::Sed(){}

Sed::Sed(std::string filename, std::string s1, std::string s2): _filename(filename), _s1(s1), _s2(s2){}

Sed::~Sed(){}

void	Sed::replace(){
	std::string	line;
	std::ifstream	file(_filename);

	if (file.is_open()){
		while (getline(file, line)){
			while (line.find(_s1) != std::string::npos)
				line.replace(line.find(_s1), _s1.length(), _s2);
			_buffer += line + "\n";
		}
		file.close();
		std::ofstream file(_filename + ".replace");
		file << _buffer;
		file.close();
	}
	else
		std::cout << "Error: can't open file" << std::endl;
}

void	Sed::replace(std::string filename, std::string s1, std::string s2){
	_filename = filename;
	_s1 = s1;
	_s2 = s2;
	replace();
}

void	Sed::replace(std::string s1, std::string s2){
	_s1 = s1;
	_s2 = s2;
	replace();
}

void	Sed::replace(std::string s2){
	_s2 = s2;
	replace();
}
