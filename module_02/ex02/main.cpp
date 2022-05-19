/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 01:12:42 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/19 23:38:02 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed nb(2);
	Fixed nb2(2);
	Fixed nb3(3);
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << "MAIN SUJET :" << std::endl;
	std::cout << "============" << std::endl << std::endl;

	std::cout << "a	->	" << a << std::endl;
	std::cout << "++a	->	" << ++a << std::endl;
	std::cout << "a	->	" << a << std::endl;
	std::cout << "a++	->	" << a++ << std::endl;
	std::cout << "a	->	" << a << std::endl;

	std::cout << "b	->	" << b << std::endl;

	std::cout << "max	->	" << Fixed::max(a, b) << std::endl;

	std::cout << std::endl << std::endl << "AUTRES TESTS :" << std::endl;
	std::cout << "==============" << std::endl << std::endl;

	std::cout << "nb = " << nb << ", nb2 = " << nb2 << ", nb3 = " << nb3;
	std::cout << ", a = " << a << ", b = " << b << std::endl << std::endl;

	if (nb <= nb2)
		std::cout << "nb <= nb2" << std::endl;
	if (nb < nb3)
		std::cout << "nb < nb3" << std::endl;
	if (nb3 >= nb2)
		std::cout << "nb3 >= nb2" << std::endl;
	if (nb3 > nb)
		std::cout << "nb3 > nb" << std::endl;
	if (nb2 == nb)
		std::cout << "nb2 = nb" << std::endl;
	if (nb != nb3)
		std::cout << "nb != nb3" << std::endl;

	std::cout << std::endl;

	std::cout << "MAX AND MIN BETWEEN a AND b :" << std::endl << std::endl;
	std::cout << "max	->	" << Fixed::max(a, b) << std::endl;
	std::cout << "min	->	" << Fixed::min(a, b) << std::endl;

	std::cout << std::endl << "DIVISION :" << std::endl << std::endl;

	std::cout << a << " / " << Fixed(2) << " = " << (a / Fixed(2)) << std::endl;
	std::cout << a << " / " << Fixed(0) << " = " << (a / Fixed(0)) << std::endl;
	return 0;
}
