/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:11:38 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/20 21:24:48 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"
#include <stdlib.h>

int		random(int min, int max)
{
	static bool first = true;
	if (first) {
		srand( time(NULL) );
		first = false;
	}
	return min + rand() % (( max + 1 ) - min);
}

Base	*generate(void)
{
	Base	*base;
	int	i = random(1, 3);

	if (i == 1)
	{
		base = new A;
		std::cout << "base type A generated" << std::endl;
		return (base);
	}
	else if (i == 2)
	{
		base = new B;
		std::cout << "base type B generated" << std::endl;
		return (base);
	}
	else
	{
		base = new C;
		std::cout << "base type C generated" << std::endl;
		return (base);
	}
}

void	identify(Base *p)
{
	A *a = dynamic_cast<A*>(p);
	if (a != NULL)
		std::cout << "-> type A" << std::endl;
	else
	{
		B	*b = dynamic_cast<B*>(p);
		if (b != NULL)
			std::cout << "-> type B" << std::endl;
		else
		{
			C	*c = dynamic_cast<C*>(p);
			if (c != NULL)
				std::cout << "->type C" << std::endl;
			else
				std::cout << "ERROR : no type found" << std::endl;
		}
	}
	// else if (B *b = dynamic_cast<B*>(p) != NULL)
	// 	std::cout << "-> type B" << std::endl;
	// else if (C *c = dynamic_cast<C*>(p) != NULL)
	// 	std::cout << "->type C" << std::endl;
	// else
		// std::cout << "ERROR : no type found" << std::endl;
}

// void	identify(Base &p)
// {	
// }

int	main()
{
	Base	*base = generate();

	identify(base);
	delete base;

	return (0);
}
