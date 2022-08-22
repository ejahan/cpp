/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:17:07 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/23 00:40:38 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top : " << mstack.top() << std::endl << std::endl;

	mstack.pop();

	std::cout << "size : " << mstack.size() << std::endl << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	std::cout << "it : " << *it << std::endl << std::endl;
	++it;
	--it;
	std::cout << "stack : " << std::endl << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}


	std::cout << std::endl << std::endl << "VECTOR TEST : " << std::endl << std::endl;

	std::vector<int> vec;

	vec.push_back(5);
	vec.push_back(17);

	std::cout << "top : " << vec.back() << std::endl << std::endl;

	vec.pop_back();

	std::cout << "size : " << vec.size() << std::endl << std::endl;

	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(737);
	vec.push_back(0);

	std::vector<int>::iterator v_it = vec.begin();
	std::vector<int>::iterator v_ite = vec.end();

	std::cout << "it : " << *v_it << std::endl << std::endl;
	++v_it;
	--v_it;
	std::cout << "stack : " << std::endl << std::endl;
	while (v_it != v_ite)
	{
		std::cout << *v_it << std::endl;
		++v_it;
	}
	
	return 0;
}
