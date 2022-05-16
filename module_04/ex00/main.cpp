/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:19:52 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/16 04:45:11 by ejahan           ###   ########.fr       */
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

	std::cout << std::endl << "===============" << std::endl;
	std::cout << "	RIGHT :" << std::endl;
	std::cout << "===============" << std::endl;
	std::cout << std::endl << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl << std::endl;

	std::cout << "Dog sound : ";
	j->makeSound();
	std::cout << "Cat sound : ";
	i->makeSound(); //will output the cat sound!
	std::cout << "Animal sound : ";
	meta->makeSound();
	std::cout << std::endl;

	std::cout << "===============" << std::endl;
	std::cout << "	WRONG :" << std::endl;
	std::cout << "===============" << std::endl;
	std::cout << std::endl << Animal->getType() << " " << std::endl;
	std::cout << Cat->getType() << " " << std::endl << std::endl;

	std::cout << "Animal sound : ";
	Animal->makeSound();
	std::cout << "Cat sound : ";
	Cat->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete Animal;
	delete Cat;
	return (0);
}
