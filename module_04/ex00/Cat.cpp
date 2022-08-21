/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:20:36 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/21 17:48:16 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "A Cat has been created" << std::endl;
	return ;
}

Cat::Cat(Cat const & cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "A Cat has been destroyed" << std::endl;
	return ;
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
	return ;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}
