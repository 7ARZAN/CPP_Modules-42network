/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:46:33 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/02 00:44:03 by elakhfif         ###   ########.fr       */
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


// -------------------- getters --------------------- //
// we use getters to get the values of the data members of the class

std::string Contact::getfirst_name(void)
{
    return (_first_name);
}

std::string Contact::getlast_name(void)
{
    return (_last_name);
}

std::string Contact::getnickname(void)
{
    return (_nickname);
}

std::string Contact::getphone_number(void)
{
    return (_phone_number);
}

std::string Contact::getdarkest_secret(void)
{
    return (_darkest_secret);
}
// -------------------- getters --------------------- //

// -------------------- setters --------------------- //
// we use setters to set the values of the data members of the class

void	Contact::setfirst_name(std::string firstname)
{
	if (firstname.length() > 10){
		firstname = firstname.substr(0,9) + ".";
	}
	this->_first_name = firstname;
}

void	Contact::setlast_name(std::string lastname)
{
	if (lastname.length() > 10){
		lastname = lastname.substr(0,9) + ".";
	}
	this->_last_name = lastname;
}

void	Contact::setnickname(std::string nickname)
{
	if (nickname.length() > 10)
	{
		nickname = nickname.substr(0,9) + ".";
	}
	this->_nickname = nickname;
}

void	Contact::setphone_number(std::string phonenumber)
{
	this->_phone_number = phonenumber;
}

void	Contact::setdarkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}
// -------------------- setters --------------------- //


