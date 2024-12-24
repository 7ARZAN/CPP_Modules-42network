/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 01:26:17 by elakhfif          #+#    #+#             */
/*   Updated: 2024/12/24 19:01:17 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ABClasses.hpp"
#include "Base.hpp"

int		main(){
	Base	*base;

	base = generate();
	identify(base);
	identify(*base);
	return 0;
}
