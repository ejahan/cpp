/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:06:41 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/23 00:39:06 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int		random(int min, int max)
{
	static bool first = true;
	if (first) {
		srand( time(NULL) );
		first = false;
	}
	return min + rand() % (( max + 1 ) - min);
}

int	main()
{
	Span sp = Span(5);
	int	i = 5;
	int	j;

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl << "**ADD RANGE TEST**" << std::endl << std::endl;

	std::vector<int> vec;
	while (i > 0)
	{
		j = random(1, 100);
		vec.push_back(j);
		std::cout << j << std::endl;
		i--;
	}
	Span	sp2(5);
	
	sp2.addRange(vec.begin(), vec.end());
	std::cout << std::endl;
	std::cout << "shortest span = " << sp2.shortestSpan() << std::endl;
	std::cout << "longest span = " << sp2.longestSpan() << std::endl;

	return (0);
}
