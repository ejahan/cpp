/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:03:09 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/04 07:07:22 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	Harl;

	std::cout << "DEBUG :" << std::endl;
	Harl.complain("DEBUG");
	std::cout << std::endl << "INFO :" << std::endl;
	Harl.complain("INFO");
	std::cout << std::endl << "WARNING :" << std::endl;
	Harl.complain("WARNING");
	std::cout << std::endl << "ERROR :" << std::endl;
	Harl.complain("ERROR");
	std::cout << std::endl << "TEST WRONG LEVEL:" << std::endl;
	Harl.complain("test");
	std::cout << std::endl << "NOTHING :" << std::endl;
	Harl.complain("");
	return (0);
}
