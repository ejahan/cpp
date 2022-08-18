/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:19:52 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/18 15:22:05 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	// const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	// const WrongAnimal* Animal = new WrongAnimal();
	const WrongAnimal* Cat = new WrongCat();

	std::cout << std::endl << "===============" << std::endl;
	std::cout << "	RIGHT :" << std::endl;
	std::cout << "===============" << std::endl;
	std::cout << std::endl << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl << std::endl;

	std::cout << "Dog sound : ";
	j->makeSound();
	std::cout << "Cat sound : ";
	i->makeSound(); //will output the cat sound!
	// std::cout << "Animal sound : ";
	// meta->makeSound();
	std::cout << std::endl;

	std::cout << "===============" << std::endl;
	std::cout << "	WRONG :" << std::endl;
	std::cout << "===============" << std::endl;
	// std::cout << std::endl << Animal->getType() << " " << std::endl;
	std::cout << Cat->getType() << " " << std::endl << std::endl;

	// std::cout << "Animal sound : ";
	// Animal->makeSound();
	std::cout << "Cat sound : ";
	Cat->makeSound();
	std::cout << std::endl;

	// delete meta;
	delete j;
	delete i;
	// delete Animal;
	delete Cat;


	// const Animal* j = new Dog();
	// std::cout << std::endl;
	// const Animal* i = new Cat();
	// std::cout << std::endl;

	// delete j;
	// std::cout << std::endl;
	// delete i;
	// std::cout << std::endl;


	// const Animal	*tab[10];
	// int	i;

	// i = 0;
	// while (i < 5)
	// {
	// 	tab[i] = new Dog();
	// 	i++;
	// }
	// while (i < 10)
	// {
	// 	tab[i] = new Cat();
	// 	i++;
	// }
	// i = 0;
	// std::cout << std::endl;
	// while (i < 10)
	// {
	// 	std::cout << i + 1 << "	->	";
	// 	std::cout << "This Animal is a " << tab[i]->getType() << std::endl;
	// 	i++;
	// }
	// std::cout << std::endl;
	// i = 0;
	// while (i < 10)
	// {
	// 	delete tab[i];
	// 	i++;
	// }
	return (0);
}
