/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:54:29 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/02 02:19:01 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

//PhoneBook class is a container for Contact class objects and it has 3 methods to add, search and print contacts
//it has an array of 8 contacts and an index to keep track of the number of contacts added to the array!
//it has a constructor and a destructor
class PhoneBook
{
	private:
		Contact contacts[2];
		int index;
	public:
		PhoneBook();
		void add_contact();
		void search_contact();
		void print_contact();
};

#endif
