/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:32:21 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/16 17:55:33 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	int myints[] = {16,2,77,29};
	std::vector<int> vec (myints, myints + sizeof(myints) / sizeof(int) );
	std::vector<int>::iterator	it;
	std::cout << "Tab : " << std::endl;
	for (it = vec.begin(); it != vec.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl << std::endl;
	try
	{
		std::cout << "First try : 77" << std::endl << "	-> ";
		easyfind(vec, 77);
		std::cout << std::endl << "Second try : 16" << std::endl << "	-> ";
		easyfind(vec, 16);
		std::cout << std::endl << "Third try : 29" << std::endl << "	-> ";
		easyfind(vec, 29);
		std::cout << std::endl << "Fourth try : 2" << std::endl << "	-> ";
		easyfind(vec, 2);
		std::cout << std::endl << "Last try : 222" << std::endl << "	-> ";
		easyfind(vec, 222);
	}
	catch (NotFoundException e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
