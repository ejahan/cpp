/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 04:20:22 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/16 20:07:10 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("unknow")
{
	std::cout << "An animal has been created" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "An animal has been created" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Animal " << this->_type << " has been destroyed" << std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "*Animal sound*" << std::endl;
	return ;
}
