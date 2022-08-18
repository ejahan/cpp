/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:06:38 by elisa             #+#    #+#             */
/*   Updated: 2022/08/18 15:57:43 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int> test_array(2);
	
	test_array[0] = 0;
	test_array[1] = 1;
	
	try
	{
		std::cout << test_array[0] << std::endl;
		std::cout << test_array[1] << std::endl;
		std::cout << test_array[2] << std::endl;
		std::cout << "Good Index" << std::endl;
	}
	catch (Array<int>::WrongIndexException e)
	{
		std::cout << e.what() << std::endl;
	}


	Array<std::string> test_array2(2);
	test_array2[0] = "azertyuiop";
	test_array2[1] = "qsdfghjklm";
	
	try
	{
		std::cout << test_array2[0] << std::endl;
		std::cout << test_array2[1] << std::endl;
		std::cout << test_array2[2] << std::endl;
		std::cout << "Good Index" << std::endl;
	}
	catch (Array<std::string>::WrongIndexException e)
	{
		std::cout << e.what() << std::endl;
	}

	// Array<std::string> test_array3;
	// test_array3 = test_array2;
	std::cout << "test" << std::endl;
	Array<std::string> test_array3(test_array2);
	std::cout << "test" << std::endl;
	// test_array2[0] = "azertyuiop";
	// test_array2[1] = "qsdfghjklm";

	try
	{
		std::cout << test_array3[0] << std::endl;
		std::cout << test_array3[1] << std::endl;
		std::cout << test_array3[2] << std::endl;
		std::cout << "Good Index" << std::endl;
	}
	catch (Array<std::string>::WrongIndexException e)
	{
		std::cout << e.what() << std::endl;
	}
	test_array3[0] = "ca a changé";
	test_array3[1] = "la aussi";
	try
	{
		std::cout << "3 : " << test_array3[0] << std::endl;
		std::cout << "2 : " << test_array2[0] << std::endl;
		std::cout << test_array3[2] << std::endl;
		std::cout << "Good Index" << std::endl;
	}
	catch (Array<std::string>::WrongIndexException e)
	{
		std::cout << e.what() << std::endl;
	}


	
	// int * a = new int();
	// std::cout << *a << std::endl;
	return (0);
}
