/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:21:38 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/16 20:28:39 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "A Dog has been created" << std::endl;
	this->_brain = new Brain();
	return ;
}

Dog::Dog(Dog const &rhs)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "A Dog has been destroyed" << std::endl;
	return ;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->_type = rhs._type;
	this->_brain = rhs._brain;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof woof" << std::endl;
	return ;
}