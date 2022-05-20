/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 03:01:47 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/20 04:49:47 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	print_points1(ClapTrap *claptrap)
{
	std::cout << std::endl << PINK << "	" << "Player1 :" << NOR << std::endl;
	std::cout << "HitPoints = " << claptrap->GetHitPoints() << std::endl;
	std::cout << "EnergyPoints = " << claptrap->GetEnergy() << std::endl << std::endl;
}

void	print_points2(ClapTrap *claptrap)
{
	std::cout << std::endl << PINK << "	" << "Player2 :" << NOR << std::endl;
	std::cout << "HitPoints = " << claptrap->GetHitPoints() << std::endl;
	std::cout << "EnergyPoints = " << claptrap->GetEnergy() << std::endl << std::endl;
}

int	main()
{
	ClapTrap	claptrap1("Player1");
	ClapTrap	claptrap2("Player2");
	std::string	cmd;
	int			i = 1;

	while (claptrap1.GetEnergy() > 0 && claptrap1.GetHitPoints() > 0
		&& claptrap2.GetEnergy() > 0 && claptrap2.GetHitPoints() > 0)
	{
		std::cout << std::endl << BLUE;
		std::cout << "==================================================================" << std::endl;
		if (i == 1)
			std::cout << "		" << claptrap1.GetName();
		else
			std::cout << "		" << claptrap2.GetName();
		std::cout << " : What do you want to do?" << std::endl;
		std::cout << "==================================================================" << std::endl << NOR;
		std::cout << "	1 : Attack enemy" << std::endl << "	2 : Repair" << std::endl;
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			return (0);
		if (i == 1 && cmd == "1")
		{
			claptrap1.attack(claptrap2.GetName());
			print_points1(&claptrap1);
			claptrap2.takeDamage(0);
			print_points2(&claptrap2);
			i = 2;
		}
		else if (i == 1 && cmd == "2")
		{
			claptrap1.beRepaired(2);
			print_points1(&claptrap1);
			i = 2;
		}
		else if (i == 2 && cmd == "1")
		{
			claptrap2.attack(claptrap1.GetName());
			print_points2(&claptrap2);
			claptrap1.takeDamage(0);
			print_points1(&claptrap1);
			i = 1;
		}
		else if (i == 2 && cmd == "2")
		{
			claptrap2.beRepaired(2);
			print_points2(&claptrap2);
			i = 1;
		}
		else
			std::cout << "ERROR : Not a valid command" << std::endl;
	}
	if (claptrap1.GetEnergy() <= 0 || claptrap1.GetHitPoints() <= 0)
		std::cout << GREEN << "Player2 won!!" << std::endl << std::endl << NOR;
	else if (claptrap2.GetEnergy() <= 0 || claptrap2.GetHitPoints() <= 0)
		std::cout << GREEN << "Player1 won!!" << std::endl << std::endl << NOR;
	return (0);
}
