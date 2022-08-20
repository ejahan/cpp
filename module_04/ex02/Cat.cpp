/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:20:36 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/20 14:22:16 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "A Cat has been created" << std::endl;
	this->_brain = new Brain();
	return ;
}

Cat::Cat(Cat const &rhs)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = rhs._type;
	this->_brain = new Brain(*rhs._brain);
	return ;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "A Cat has been destroyed" << std::endl;
	return ;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->_type = rhs._type;
	this->_brain = rhs._brain;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
	return ;
}

Brain	*Cat::GetBrain(void) const
{
	std::cout <<  &this->_brain << std::endl;
	return (this->_brain);
}
