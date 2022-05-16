/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:40:50 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/16 20:23:35 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "A Brain has been created" << std::endl;
	return ;
}

Brain::Brain(Brain const &rhs)
{
	std::cout << "Brain copy constructor called" << std::endl;
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
