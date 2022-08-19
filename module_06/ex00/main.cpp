/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 21:15:25 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/20 01:20:30 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int ac, char **av)
{
	std::string	str;
	double	nb_d;

	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}

	/*
		cas erreurs :
			trop de lettre
			+inf / -inf / nan / -inff / +inff / nanf
			jsp
	*/

	str = av[1];
	nb_d = std::stod(av[1]);
	std::cout << nb_d << std::endl;

	return (0);
}
