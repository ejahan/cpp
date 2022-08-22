/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:20:02 by elisa             #+#    #+#             */
/*   Updated: 2022/08/22 19:10:09 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main()
{
	std::string s1 = "asdfghjkl";
	std::string s2 = "qwertyuiop";

	std::cout << "s1 : " << s1 << std::endl << "s2 : " << s2 << std::endl << std::endl;

	std::cout << "MIN : " << ::min(s1, s2) << std::endl;
	std::cout << "MAX : " << ::max(s1, s2) << std::endl << std::endl;
	std::cout << std::endl << "SWAP :" << std::endl << std::endl << std::endl;
	::swap(s1, s2);
	std::cout << "s1 : " << s1 << std::endl << "s2 : " << s2 << std::endl << std::endl;
	
	std::cout << "MIN : " << ::min(s1, s2) << std::endl;
	std::cout << "MAX : " << ::max(s1, s2) << std::endl << std::endl;
}

// class Awesome
// {
// 	public:
// 		Awesome(void) : _n(0) {}
// 		Awesome( int n ) : _n( n ) {}
// 		Awesome & operator= (Awesome & a) { _n = a._n; return *this; } bool
// 		operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
// 		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
// 		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
// 		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
// 		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
// 		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
// 		int get_n() const { return _n; }
		
// 	private:
// 		int _n;

// };

// std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

// int main(void)
// {
// 	Awesome a(2), b(4);
// 	std::cout << "a : " << a << std::endl;
// 	std::cout << "b : " << b << std::endl;
// 	std::cout << std::endl << "**SWAP**" << std::endl << std::endl;
// 	swap(a, b);
// 	std::cout << "a : " << a << std::endl;
// 	std::cout << "b : " << b << std::endl;
// 	std::cout << std::endl;
// 	std::cout << "MIN : " << ::min(a, b) << std::endl;
// 	std::cout << "MAX : " << ::max(a, b) << std::endl << std::endl;std::cout << a << " " << b << std::endl;
// 	// std::cout << max(a, b) << std::endl;
// 	// std::cout << min(a, b) << std::endl;
// 	return (0);
// }
