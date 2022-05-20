/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 03:01:47 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/20 05:26:51 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void	print_points1(ScavTrap *ScavTrap)
{
	std::cout << std::endl << PINK << "	" << "Player1 :" << std::endl << NOR;
	std::cout << "HitPoints = " << ScavTrap->GetHitPoints() << std::endl;
	std::cout << "EnergyPoints = " << ScavTrap->GetEnergy() << std::endl << std::endl;
}

void	print_points2(FragTrap *FragTrap)
{
	std::cout << std::endl << PINK << "	" << "Player2 :" << std::endl << NOR;
	std::cout << "HitPoints = " << FragTrap->GetHitPoints() << std::endl;
	std::cout << "EnergyPoints = " << FragTrap->GetEnergy() << std::endl << std::endl;
}

void	AskScavTrap(ScavTrap *ScavTrap)
{
	std::cout << std::endl;
	std::cout << "==================================================================" << std::endl;
	std::cout << "		" << ScavTrap->GetName();
	std::cout << " : What do you want to do?" << std::endl;
	std::cout << "==================================================================" << std::endl;
	std::cout << "	1 : Attack enemy" << std::endl << "	2 : Repair" << std::endl << "	3 : Enter in Gate keeper mode" << std::endl;
}

void	AskFragTrap(FragTrap *FragTrap)
{
	std::cout << std::endl;
	std::cout << "==================================================================" << std::endl;
	std::cout << "		" << FragTrap->GetName();
	std::cout << " : What do you want to do?" << std::endl;
	std::cout << "==================================================================" << std::endl;
	std::cout << "	1 : Attack enemy" << std::endl << "	2 : Repair" << std::endl << "	3 : Ask to high five" << std::endl;
}

int	main()
{
	ScavTrap	ScavTrap1("Player1");
	FragTrap	FragTrap("Player2");
	std::string	cmd;
	int			i = 1;

	while (ScavTrap1.GetEnergy() > 0 && ScavTrap1.GetHitPoints() > 0
		&& FragTrap.GetEnergy() > 0 && FragTrap.GetHitPoints() > 0)
	{
		std::cout << BLUE;
		if (i == 1)
			AskScavTrap(&ScavTrap1);
		else
			AskFragTrap(&FragTrap);
		std::cout << NOR;
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			return (0);
		if (i == 1 && cmd == "1")
		{
			ScavTrap1.attack(FragTrap.GetName());
			print_points1(&ScavTrap1);
			FragTrap.takeDamage(ScavTrap1.GetAttackDamage());
			print_points2(&FragTrap);
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
			FragTrap.attack(ScavTrap1.GetName());
			print_points2(&FragTrap);
			ScavTrap1.takeDamage(FragTrap.GetAttackDamage());
			print_points1(&ScavTrap1);
			i = 1;
		}
		else if (i == 2 && cmd == "2")
		{
			FragTrap.beRepaired(2);
			print_points2(&FragTrap);
			i = 1;
		}
		else if (i == 2 && cmd == "3")
		{
			FragTrap.highFivesGuys();
			print_points2(&FragTrap);
			i = 1;
		}
		else
			std::cout << "ERROR : Not a valid command" << std::endl;
	}
	if (ScavTrap1.GetEnergy() <= 0 || ScavTrap1.GetHitPoints() <= 0)
		std::cout << GREEN << "Player2 won!!" << std::endl << std::endl << NOR;
	else if (FragTrap.GetEnergy() <= 0 || FragTrap.GetHitPoints() <= 0)
		std::cout << GREEN << "Player1 won!!" << std::endl << std::endl << NOR;
	return (0);
}
