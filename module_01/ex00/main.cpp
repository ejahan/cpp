/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 00:58:08 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/18 23:25:23 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av)
{
	Zombie	test;
	Zombie	*zombie;

	test.randomChump("test");
	zombie = test.newZombie("newZombie");
	zombie->announce();
	delete zombie;
	return (0);
}
