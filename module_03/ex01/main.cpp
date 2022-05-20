/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 03:01:47 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/20 05:00:43 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	print_points1(ScavTrap *ScavTrap)
{
	std::cout << std::endl << PINK << "	" << "Player1 :" << std::endl << NOR;
	std::cout << "HitPoints = " << ScavTrap->GetHitPoints() << std::endl;
	std::cout << "EnergyPoints = " << ScavTrap->GetEnergy() << std::endl << std::endl;
}

void	print_points2(ScavTrap *ScavTrap)
{
	std::cout << std::endl << PINK << "	" << "Player2 :" << std::endl << NOR;
	std::cout << "HitPoints = " << ScavTrap->GetHitPoints() << std::endl;
	std::cout << "EnergyPoints = " << ScavTrap->GetEnergy() << std::endl << std::endl;
}

int	main()
{
	ScavTrap	ScavTrap1("Player1");
	ScavTrap	ScavTrap2("Player2");
	std::string	cmd;
	int			i = 1;

	while (ScavTrap1.GetEnergy() > 0 && ScavTrap1.GetHitPoints() > 0
		&& ScavTrap2.GetEnergy() > 0 && ScavTrap2.GetHitPoints() > 0)
	{
		std::cout << std::endl << BLUE;
		std::cout << "==================================================================" << std::endl;
		if (i == 1)
			std::cout << "		" << ScavTrap1.GetName();
		else
			std::cout << "		" << ScavTrap2.GetName();
		std::cout << " : What do you want to do?" << std::endl;
		std::cout << "==================================================================" << std::endl << NOR;
		std::cout << "	1 : Attack enemy" << std::endl << "	2 : Repair" << std::endl << "	3 : Gate keeper mode" << std::endl;
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			return (0);
		if (i == 1 && cmd == "1")
		{
			ScavTrap1.attack(ScavTrap2.GetName());
			print_points1(&ScavTrap1);
			ScavTrap2.takeDamage(3);
			print_points2(&ScavTrap2);
			i = 2;
		}
		else if (i == 1 && cmd == "2")
		{
			ScavTrap1.beRepaired(2);
			print_points1(&ScavTrap1);
			i = 2;
		}
		else if (i == 1 && cmd == "3")
		{
			ScavTrap1.guardGate();
			print_points1(&ScavTrap1);
			i = 2;
		}
		else if (i == 2 && cmd == "1")
		{
			ScavTrap2.attack(ScavTrap1.GetName());
			print_points2(&ScavTrap2);
			ScavTrap1.takeDamage(3);
			print_points1(&ScavTrap1);
			i = 1;
		}
		else if (i == 2 && cmd == "2")
		{
			ScavTrap2.beRepaired(2);
			print_points2(&ScavTrap2);
			i = 1;
		}
		else if (i == 2 && cmd == "3")
		{
			ScavTrap2.guardGate();
			print_points2(&ScavTrap2);
			i = 1;
		}
		else
			std::cout << "ERROR : Not a valid command" << std::endl;
	}
	if (ScavTrap1.GetEnergy() <= 0 || ScavTrap1.GetHitPoints() <= 0)
		std::cout << GREEN << "Player2 won!!" << std::endl << std::endl << NOR;
	else if (ScavTrap2.GetEnergy() <= 0 || ScavTrap2.GetHitPoints() <= 0)
		std::cout << GREEN << "Player1 won!!" << std::endl << std::endl << NOR;
	return (0);
}
