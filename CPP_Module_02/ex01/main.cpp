/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 07:45:26 by elakhfif          #+#    #+#             */
/*   Updated: 2023/12/10 08:15:02 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    
    a = Fixed( 1234.4321f );
    
    std::cout << "a is " << a.toInt() << " as integer" << std::endl; 
    std::cout << "b is " << b.toInt() << " as integer" << std::endl; 
    std::cout << "c is " << c.toInt() << " as integer" << std::endl; 
    std::cout << "d is " << d.toInt() << " as integer" << std::endl; 
    std::cout << "a is " << a.toFloat() << " as f" << std::endl; 
    std::cout << "b is " << b.toFloat() << " as f" << std::endl; 
    std::cout << "c is " << c.toFloat() << " as f" << std::endl; 
    std::cout << "d is " << d.toFloat() << " as f" << std::endl; 
    return 0; 
}
