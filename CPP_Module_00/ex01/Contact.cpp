/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:46:33 by elakhfif          #+#    #+#             */
/*   Updated: 2023/09/25 20:20:49 by elakhfif         ###   ########.fr       */
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
    return (this->first_name);
}

std::string Contact::getlast_name(void)
{
    return (this->last_name);
}

std::string Contact::getnickname(void)
{
    return (this->nickname);
}

std::string Contact::getphone_number(void)
{
    return (this->phone_number);
}

std::string Contact::getdarkest_secret(void)
{
    return (this->darkest_secret);
}
// -------------------- getters --------------------- //

// -------------------- setters --------------------- //
// we use setters to set the values of the data members of the class

void	Contact::setfirst_name(std::string first_name)
{
	this->first_name = first_name;
}

void	Contact::setlast_name(std::string last_name)
{
	this->last_name = last_name;
}

void	Contact::setnickname(std::string nickname)
{
	this->nickname = nickname;
}

void	Contact::setphone_number(std::string phone_number)
{
	this->phone_number = phone_number;
}

void	Contact::setdarkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}
// -------------------- setters --------------------- //


//truncate function is a function that takes a string and returns a string
//and it truncates the string if it's length is greater than 10 characters
std::string Contact::truncate(std::string str)
{
    if (str.length() > 10)
	return (str.substr(0, 9) + ".");
    return (str);
}

//print_contact function is a function that takes an integer and returns nothing
//and it prints the contact with the index i in the phonebook in a specific format
void Contact::print_contact(int i)
{
	std::cout << std::setw(10) << i << "|";
	std::cout << std::setw(10) << truncate(this->getfirst_name()) << "|";
	std::cout << std::setw(10) << truncate(this->getlast_name()) << "|";
	std::cout << std::setw(10) << truncate(this->getnickname()) << std::endl;
}
