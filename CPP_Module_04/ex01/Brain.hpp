/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:17:02 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/02 21:55:59 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(Brain const &b);
		Brain &operator=(Brain const &b);
		~Brain();
		std::string identify() const;
		void set_ideas(int i, std::string idea);
		std::string get_ideas(int i) const;
};

#endif
