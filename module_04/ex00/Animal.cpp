/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:19:04 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/16 04:22:01 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("unknow")
{
	std::cout << "An animal has been created" << std::endl;
	return ;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "An animal has been created" << std::endl;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal " << this->type << " has been destroyed" << std::endl;
	return ;
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
