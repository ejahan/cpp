/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 04:20:22 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/19 19:48:26 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Unknow Animal")
{
	std::cout << "A Wrong animal has been created" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "A Wrong animal has been created" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Wrong Animal " << this->type << " has been destroyed" << std::endl;
	return ;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "*Animal sound*" << std::endl;
	return ;
}
