/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:21:38 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/15 05:10:40 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "A Dog has been created" << std::endl;
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
