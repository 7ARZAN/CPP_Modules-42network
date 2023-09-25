/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:45:38 by elakhfif          #+#    #+#             */
/*   Updated: 2023/09/25 20:19:17 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

//----------------------------------- Contact Class -----------------------------------//
//class Contact is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.
//small definition of class Contact : is a class that contains all the information of a contact.
//private : is a keyword that specifies access modifier for the member functions and member variables under it.
//public : is a keyword that specifies access modifier for the member functions and member variables under it.
//setters : is a function that sets the value of a variable.
//getters : is a function that gets the value of a variable.
//std::string : is a data type that is used to store a sequence of characters.
//----------------------------------- Contact Class -----------------------------------//
class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
public:
	std::string truncate(std::string str);
	void print_contact(int i);
	void setfirst_name(std::string first_name);
	void setlast_name(std::string last_name);
	void setnickname(std::string nickname);
	void setphone_number(std::string phone_number);
	void setdarkest_secret(std::string darkest_secret);
	std::string getfirst_name();
	std::string getlast_name();
	std::string getnickname();
	std::string getphone_number();
	std::string getdarkest_secret();
};

#endif
