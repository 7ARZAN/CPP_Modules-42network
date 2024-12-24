/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ABClasses.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 01:19:33 by elakhfif          #+#    #+#             */
/*   Updated: 2024/12/24 19:02:44 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABCLASSES_HPP
# define ABCLASSES_HPP

# include <iostream>
# include <string>
# include <ctime>
# include "Base.hpp"

class	A: public Base{
};

class	B: public Base{
};

class	C: public Base{
};

Base	*generate();
void	identify(Base *p);
void	identify(Base &p);
int	random_rand();

#endif
