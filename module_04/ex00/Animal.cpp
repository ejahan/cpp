/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:19:04 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/19 19:48:15 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Unknow Animal")
{
	std::cout << "An animal has been created" << std::endl;
	return ;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "An animal has been created" << std::endl;
	return ;
}

Animal::Animal(Animal const & cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal " << this->type << " has been destroyed" << std::endl;
	return ;
}

Animal	&Animal::operator=(Animal const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "*Animal sound*" << std::endl;
	return ;
}
