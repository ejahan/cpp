/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:40:50 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/19 22:37:16 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) : i(0)
{
	std::cout << "A Brain has been created" << std::endl;
	return ;
}

Brain::Brain(Brain const &rhs)
{
	std::cout << "Brain copy constructor called" << std::endl;
	// int	i;

	// i = 0;
	// while (i < 100)
	// {
	// 	this->ideas[i] = rhs.ideas[i];
	// 	i++;
	// }
	// this->i = rhs.i;
	*this = rhs;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "A Brain has been destroyed" << std::endl;
	return ;
}

Brain	&Brain::operator=(Brain const &rhs)
{
	int	i;

	i = 0;
	std::cout << "Brain copy assignment operator called" << std::endl;
	while (i < 100)
	{
		this->ideas[i] = rhs.ideas[i];
		i++;
	}
	return (*this);
}

void	Brain::NewIdea(std::string str)
{
	if (i < 100)
	{
		this->ideas[i] = str;
		i++;
	}
	return ;
}
