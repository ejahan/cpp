/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 03:01:47 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/13 05:49:40 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	// ClapTrap	test("test");
	ScavTrap	test("test");

	test.attack("adversaire");
	test.takeDamage(10);
	test.beRepaired(5);
	test.guardGate();
	return (0);
}
