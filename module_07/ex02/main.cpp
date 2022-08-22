/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:06:38 by elisa             #+#    #+#             */
/*   Updated: 2022/08/22 23:57:10 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int> test_array(2);
	
	test_array[0] = 0;
	test_array[1] = 1;

	std::cout << "**FIRST ARRAY**" << std::endl << std::endl;

	try
	{
		std::cout << "0 -> " << test_array[0] << std::endl;
		std::cout << "1 -> " << test_array[1] << std::endl;
		std::cout << "2 -> " << test_array[2] << std::endl;
		std::cout << "Good Index" << std::endl;
	}
	catch (Array<int>::WrongIndexException e)
	{
		std::cout << e.what() << std::endl;
	}


	Array<std::string> test_array2(2);
	test_array2[0] = "azertyuiop";
	test_array2[1] = "qsdfghjklm";

	std::cout << std::endl << std::endl << "**SECOND ARRAY**" << std::endl << std::endl;

	try
	{
		std::cout << "0 -> " << test_array2[0] << std::endl;
		std::cout << "1 -> " << test_array2[1] << std::endl;
		std::cout << "2 -> " << test_array2[2] << std::endl;
		std::cout << "Good Index" << std::endl;
	}
	catch (Array<std::string>::WrongIndexException e)
	{
		std::cout << e.what() << std::endl;
	}

	Array<std::string> test_array3;
	test_array3 = test_array2;

	// Array<std::string> test_array3(test_array2);

	std::cout << std::endl << std::endl << "**THIRD ARRAY**" << std::endl << std::endl;

	try
	{
		std::cout << "0 -> " << test_array3[0] << std::endl;
		std::cout << "1 -> " << test_array3[1] << std::endl;
		std::cout << "2 -> " << test_array3[2] << std::endl;
		std::cout << "Good Index" << std::endl;
	}
	catch (Array<std::string>::WrongIndexException e)
	{
		std::cout << e.what() << std::endl;
	}
	test_array3[0] = "test";

	std::cout << std::endl << std::endl << "**CHANGE ARRAY3[0]**" << std::endl << std::endl;

	try
	{
		std::cout << "array3[0] : " << test_array3[0] << std::endl;
		std::cout << "array2[0] : " << test_array2[0] << std::endl;
		std::cout << "Good Index" << std::endl;
	}
	catch (Array<std::string>::WrongIndexException e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
