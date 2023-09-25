/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:46:33 by elakhfif          #+#    #+#             */
/*   Updated: 2023/09/25 19:18:47 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//----------------------- what is a constructor? -----------------------//
//A constructor is a special type of member function that initialises an
//object automatically when it is created.
//It is constructor because it constructs the values of data members of the class.
//It is called constructor because it constructs the values of data members of the class.
//and here we just initialize the values of the data members of the class.
//----------------------- what is a constructor? -----------------------//

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::set_first_name(std::string first_name)
{
    this->first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
    this->last_name = last_name;
}

void Contact::set_nickname(std::string nickname)
{
    this->nickname = nickname;
}

void Contact::set_phone_number(std::string phone_number)
{
    this->phone_number = phone_number;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
    this->darkest_secret = darkest_secret;
}

std::string Contact::get_first_name()
{
    return (this->first_name);
}

std::string Contact::get_last_name()
{
    return (this->last_name);
}

std::string Contact::get_nickname()
{
    return (this->nickname);
}

std::string Contact::get_phone_number()
{
    return (this->phone_number);
}

std::string Contact::get_darkest_secret()
{
    return (this->darkest_secret);
}
