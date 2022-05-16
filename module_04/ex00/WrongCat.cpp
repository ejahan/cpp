/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 04:23:28 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/16 04:26:28 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("Cat")
{
	std::cout << "A Cat has been created" << std::endl;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "A Cat has been destroyed" << std::endl;
	return ;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
	return ;
}
