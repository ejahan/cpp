/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:54:39 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/01 00:21:57 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*zombie;
	int		i;

	i = 0;
	zombie = new Zombie[N];
	while (i < N)
	{
		zombie[i]._name = name;
		i++;
	}
	return (zombie);
}
