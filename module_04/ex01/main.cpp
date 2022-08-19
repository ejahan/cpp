/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:19:52 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/19 22:53:40 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal	*tab[10];
	int	i;

	i = 0;
	while (i < 5)
	{
		tab[i] = new Dog();
		i++;
	}
	while (i < 10)
	{
		tab[i] = new Cat();
		i++;
	}
	i = 0;
	std::cout << std::endl;
	while (i < 10)
	{
		std::cout << i + 1 << "	->	";
		std::cout << "This Animal is a " << tab[i]->getType() << std::endl;
		i++;
	}
	std::cout << std::endl;
	i = 0;
	while (i < 10)
	{
		delete tab[i];
		i++;
	}

	Dog basic;
	const Dog	test(basic);
	Dog tmp = basic;
	std::cout << std::endl;
	basic.GetBrain();
	tmp.GetBrain();
	test.GetBrain();
	std::cout << std::endl;

	return (0);
}