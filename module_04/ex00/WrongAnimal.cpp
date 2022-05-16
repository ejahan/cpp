/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 04:20:22 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/16 04:23:14 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("unknow")
{
	std::cout << "An animal has been created" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "An animal has been created" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Animal " << this->type << " has been destroyed" << std::endl;
	return ;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "*Animal sound*" << std::endl;
	return ;
}
