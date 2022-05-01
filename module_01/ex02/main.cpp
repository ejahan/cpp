/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:43:39 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/01 23:02:07 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str;
	std::string	*stringPTR;
	std::string	& stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	std::cout << std::endl << "	MEMORY ADDRESS" << std::endl << std::endl;
	std::cout << "string variable :	" << &str << std::endl;
	std::cout << "stringPTR :		" << stringPTR << std::endl;
	std::cout << "stringREF :		" << &stringREF << std::endl;
	std::cout << std::endl << "	VALUE" << std::endl << std::endl;
	std::cout << "string variable :	" << str << std::endl;
	std::cout << "stringPTR :		" << *stringPTR << std::endl;
	std::cout << "stringREF :		" << stringREF << std::endl;
	std::cout << std::endl;
	return (0);
}
