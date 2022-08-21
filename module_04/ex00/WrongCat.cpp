/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 04:23:28 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/21 17:52:32 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("Cat")
{
	std::cout << "A Wrong Cat has been created" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const & cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "A Wrong Cat has been destroyed" << std::endl;
	return ;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}
