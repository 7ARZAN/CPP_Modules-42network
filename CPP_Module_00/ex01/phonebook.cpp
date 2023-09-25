/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:53:33 by elakhfif          #+#    #+#             */
/*   Updated: 2023/09/25 20:28:55 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//phonebook here is a constructor which is called when the object is created.
PhoneBook::PhoneBook()
{
    std::cout << "[PHONEBOOK] : created successfully\n";
}

//~phonebook here is a destructor which is called when the object is destroyed.
PhoneBook::~PhoneBook()
{
	std::cout << "[PHONEBOOK] : destroyed successfully\n";
}
