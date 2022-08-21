/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:21:38 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/21 17:50:23 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "A Dog has been created" << std::endl;
	return ;
}

Dog::Dog(Dog const & cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "A Dog has been destroyed" << std::endl;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof woof" << std::endl;
	return ;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}
