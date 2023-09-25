/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:54:29 by elakhfif          #+#    #+#             */
/*   Updated: 2023/09/25 19:19:16 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

//Class phonebook is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.
class Phonebook
{
    public:
	Phonebook();
	~Phonebook();
	void add_contact();
	void search_contact();
	void print_contact(int i);
	void print_all_contacts();
    private:
	Contact contacts[8];
	int index;
};

#endif
