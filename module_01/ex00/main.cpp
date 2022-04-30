/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 00:58:08 by ejahan            #+#    #+#             */
/*   Updated: 2022/04/30 23:48:27 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av)
{
	Zombie	test;
	Zombie	*zombie;

	// test.announce();
	test.randomChump("test");
	zombie = test.newZombie("newZombie");
	zombie->announce();
	delete zombie;
	return (0);
}
