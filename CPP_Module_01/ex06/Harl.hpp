/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 06:02:24 by elakhfif          #+#    #+#             */
/*   Updated: 2023/11/24 06:23:14 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

/*
Sometimes you don’t want to pay attention to everything Harl says. Implement a
system to filter what Harl says depending on the log levels you want to listen to.
Create a program that takes as parameter one of the four levels. It will display all
messages from this level and above. For example:
$> ./harl DEBUG
[DEBUG] This is a debug message
[INFO] This is an info message
[WARNING] This is a warning message
[ERROR] This is an error message
$> ./harl INFO
[INFO] This is an info message
[WARNING] This is a warning message
[ERROR] This is an error message
$> ./harl WARNING
[WARNING] This is a warning message
[ERROR] This is an error message
$> ./harl ERROR
[ERROR] This is an error message
$> ./harl
$>
*/

class Harl
{
    private:
	std::string _type;
	std::string _msg;
    public:
	Harl();
	Harl(std::string type, std::string msg);
	Harl(Harl const &h);
	Harl &operator=(Harl const &h);
	~Harl();
	std::string getType() const;
	std::string getMsg() const;
	void setType(std::string type);
	void setMsg(std::string msg);
};

void	console(std::string const & level, std::string const & message);

#endif
