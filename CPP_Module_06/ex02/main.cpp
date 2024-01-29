/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 01:26:17 by elakhfif          #+#    #+#             */
/*   Updated: 2024/01/29 01:40:43 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ABClasses.hpp"
#include "Base.hpp"

int		main(){
	Base *base = generate();
	identify_fromPTR(base);
	identify_fromREF(*base);
	return 0;
}
