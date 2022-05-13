/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 05:36:27 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/13 05:58:43 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Unknow", 100, 50, 20)
{
	std::cout << "a ScavTrap has been created" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "a ScavTrap has been created" << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "a ScavTrap has been destroyed" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_EnergyPoints >= 1)
	{
		this->_EnergyPoints -= 1;
		std::cout << "ScavTrap " << this->_Name << " attacks " << target \
			<< ", causing " << this->_Attack_damage << " points of damage" << std::endl;
	}
	if (this->_EnergyPoints == 0)
		std::cout << "ScavTrap " << this->_Name << " doesn't have enought Energy to continue, " \
			<< target << " is the winner" << std::endl;
	std::cout << std::endl << "	ScavTrap " << this->_Name << " :" << std::endl;
	std::cout << "HitPoints = " << this->_HitPoints << std::endl;
	std::cout << "EnergyPoints = " << this->_EnergyPoints << std::endl << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_HitPoints >= 1)
	{
		this->_HitPoints -= amount;
		std::cout << "ScavTrap " << this->_Name << " has been attacked -> -" \
			<< amount << " HitPoints" << std::endl;
		if (this->_HitPoints <= 0)
			std::cout << "ScavTrap " << this->_Name << " is dead" << std::endl;

	}
	if (this->_EnergyPoints == 0)
		std::cout << "ScavTrap " << this->_Name << " doesn't have enought Energy to continue, " << std::endl;
	std::cout << std::endl << "	ScavTrap " << this->_Name << " :" << std::endl;
	std::cout << "HitPoints = " << this->_HitPoints << std::endl;
	std::cout << "EnergyPoints = " << this->_EnergyPoints << std::endl << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPoints >= 1)
	{
		this->_EnergyPoints -= 1;
		this->_HitPoints += amount;
		std::cout << "ScavTrap " << this->_Name << " has been repaired -> +" \
			<< amount << " HitPoints"<< std::endl;

	}
	if (this->_EnergyPoints == 0)
		std::cout << "ScavTrap " << this->_Name << " doesn't have enought Energy to continue, " << std::endl;
	std::cout << std::endl << "	ScavTrap " << this->_Name << " :" << std::endl;
	std::cout << "HitPoints = " << this->_HitPoints << std::endl;
	std::cout << "EnergyPoints = " << this->_EnergyPoints << std::endl << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_Name << " est entre en mode Gate keeper (a changer)" << std::endl;
}
