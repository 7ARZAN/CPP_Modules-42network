/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:24:05 by elakhfif          #+#    #+#             */
/*   Updated: 2024/06/18 18:11:12 by tarzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "whatever.hpp"

// class Awesome
// {
// 	public:
// 		Awesome(void) : _n(0){}
// 		Awesome( int n ) : _n( n ){}
// 		Awesome &operator=( Awesome & a){
// 			_n = a._n; return *this;
// 		}
// 		bool	operator==( Awesome const & rhs ) const{
// 			return (this->_n == rhs._n);
// 		}
// 		bool	operator!=( Awesome const & rhs ) const{
// 			return (this->_n != rhs._n);
// 		}
// 		bool	operator>( Awesome const & rhs ) const{
// 			return (this->_n > rhs._n);
// 		}
// 		bool	operator<( Awesome const & rhs ) const{
// 			return (this->_n < rhs._n);
// 		}
// 		bool	operator>=( Awesome const & rhs ) const{
// 			return (this->_n >= rhs._n);
// 		}
// 		bool	operator<=( Awesome const & rhs ) const{
// 			return (this->_n <= rhs._n);
// 		}
// 		int	get_n() const{
// 			return _n;
// 		}
// 	private:
// 		int	_n;
// };
//
// std::ostream & operator<<(std::ostream & out, const Awesome &a){
// 	out << a.get_n();
// 	return out;
// }
//
// int main(void)
// {
// 	Awesome a(2), b(4);
//
//         swap(a, b);
//         std::cout << a << " " << b << std::endl;
//         std::cout << max(a, b) << std::endl;
//         std::cout << min(a, b) << std::endl;
//         return (0);
// }

int	main(){
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
