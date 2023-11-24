/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 06:02:16 by elakhfif          #+#    #+#             */
/*   Updated: 2023/11/24 06:26:40 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::Harl(std::string type, std::string msg): _type(type), _msg(msg){}

Harl::Harl(Harl const &h){*this = h;}

Harl::~Harl(){}

Harl &Harl::operator=(Harl const &h)
{
    this->_type = h._type;
    this->_msg = h._msg;
    return *this;
}

std::string Harl::getType() const{return this->_type;}

std::string Harl::getMsg() const{return this->_msg;}

void Harl::setType(std::string type){this->_type = type;}

void Harl::setMsg(std::string msg){this->_msg = msg;}

void	console(std::string const & level, std::string const & message)
{
    Harl h(level, message);
    std::cout << h.getType() << ": " << h.getMsg() << std::endl;
}
