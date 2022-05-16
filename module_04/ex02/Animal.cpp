/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:19:04 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/16 20:06:24 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("unknow")
{
	std::cout << "An animal has been created" << std::endl;
	return ;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "An animal has been created" << std::endl;
	return ;
}

Animal::Animal(Animal const &rhs)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal " << this->_type << " has been destroyed" << std::endl;
	return ;
}

Animal	&Animal::operator=(Animal const &rhs)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "*Animal sound*" << std::endl;
	return ;
}
