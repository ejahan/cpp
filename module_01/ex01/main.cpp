/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:54:41 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/01 00:22:45 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	zombie;
	Zombie	*zombie_test;
	int	i;

	i = 0;
	zombie_test = zombie.zombieHorde(4, "test");
	while (i < 4)
	{
		zombie_test[i].announce();
		i++;
	}
	delete zombie_test;
	return (0);
}
