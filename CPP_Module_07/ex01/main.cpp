/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:24:05 by elakhfif          #+#    #+#             */
/*   Updated: 2024/06/18 18:14:38 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

// class Awesome
// {
// 	public:
// 		Awesome( void ) : _n( 42 ){
// 			return;
// 		}
// 		int	get( void ) const{
// 			return this->_n;
// 		}
// 	private:
// 		int	_n;
// };
//
// std::ostream &operator<<( std::ostream & out, Awesome const & rhs ){
// 	out << rhs.get();
// 	return out;
// }
//
// template	<typename T>
// void	print(T& x){
// 	std::cout << x << std::endl;
// 	return;
// }
//
// int	main(){
// 	int	tab[] = { 0, 1, 2, 3, 4 };
// 	Awesome	tab2[5];
//
// 	iter( tab, 5, print<const int> );
// 	iter( tab2, 5, print<Awesome> );
//
// 	return 0;
// }

int	main(){
	char		tab[] = {'a', 'b', 'c', 'd', 'e'};
	iter(tab, 5, print);
	iter(tab, 5, add);
	return 0;
}
