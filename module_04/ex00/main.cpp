/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:19:52 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/19 21:38:47 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* Animal = new WrongAnimal();
	const WrongAnimal* Cat = new WrongCat();
	const WrongCat	wrong_cat;

	std::cout << std::endl << "===============" << std::endl;
	std::cout << "	RIGHT :" << std::endl;
	std::cout << "===============" << std::endl << std::endl;
	std::cout << "types :" << std::endl;
	std::cout << std::endl << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl << std::endl;

	std::cout << "sounds :" << std::endl << std::endl;
	std::cout << "Dog sound : ";
	j->makeSound();
	std::cout << "Cat sound : ";
	i->makeSound(); //will output the cat sound!
	std::cout << "Animal sound : ";
	meta->makeSound();
	std::cout << std::endl;

	std::cout << "===============" << std::endl;
	std::cout << "	WRONG :" << std::endl;
	std::cout << "===============" << std::endl << std::endl;
	std::cout << "types :" << std::endl;
	std::cout << std::endl << Animal->getType() << " " << std::endl;
	std::cout << Cat->getType() << " " << std::endl << std::endl;

	std::cout << "sounds :" << std::endl << std::endl;
	std::cout << "Animal sound : ";
	Animal->makeSound();
	std::cout << "Cat sound : ";
	Cat->makeSound();
	std::cout << std::endl;

	std::cout << "WrongCat 'wrong_cat' sound :" << std::endl << std::endl;
	wrong_cat.makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete Animal;
	delete Cat;
	return (0);
}
