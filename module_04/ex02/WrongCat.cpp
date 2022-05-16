/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 04:23:28 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/16 20:04:50 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("Cat")
{
	std::cout << "A Cat has been created" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const &rhs)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "A Cat has been destroyed" << std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
	return ;
}
