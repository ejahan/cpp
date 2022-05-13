/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 01:12:42 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/13 02:55:26 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << "a	->	" << a << std::endl;
	std::cout << "++a	->	" << ++a << std::endl;
	std::cout << "a	->	" << a << std::endl;
	std::cout << "a++	->	" << a++ << std::endl;
	std::cout << "a	->	" << a << std::endl;
	std::cout << "b	->	" << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl; // CA MARCHE PAAAAAAAS
	return (0);
}
