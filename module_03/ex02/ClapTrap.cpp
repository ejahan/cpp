/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 03:01:41 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/15 03:30:25 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _Name("Unknow"), _HitPoints(10), _EnergyPoints(10), _Attack_damage(0)
{
	std::cout << "a ClapTrap has been created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _HitPoints(10), _EnergyPoints(10), _Attack_damage(0)
{
	std::cout << "a ClapTrap has been created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name,int a, int b, int c) : _Name(name), _HitPoints(a), _EnergyPoints(b), _Attack_damage(c)
{
	std::cout << "a ClapTrap has been created" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "a ClapTrap has been destroyed" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_EnergyPoints >= 1)
	{
		this->_EnergyPoints -= 1;
		std::cout << "ClapTrap " << this->_Name << " attacks " << target \
			<< ", causing " << this->_Attack_damage << " points of damage" << std::endl;
	}
	if (this->_EnergyPoints == 0)
		std::cout << this->_Name << " doesn't have enought Energy to continue, " << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HitPoints >= 1)
	{
		this->_HitPoints -= amount;
		std::cout << this->_Name << " has been attacked -> -" \
			<< amount << " HitPoints" << std::endl;
		if (this->_HitPoints <= 0)
			std::cout << this->_Name << " is dead :(" << std::endl;
	}
	if (this->_EnergyPoints == 0)
		std::cout << this->_Name << " doesn't have enought Energy to continue, " << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPoints >= 1)
	{
		this->_EnergyPoints -= 1;
		this->_HitPoints += amount;
		std::cout << this->_Name << " has been repaired -> +" \
			<< amount << " HitPoints"<< std::endl;
	}
	if (this->_EnergyPoints == 0)
		std::cout << this->_Name << " doesn't have enought Energy to continue, " << std::endl;
}

int	ClapTrap::GetEnergy(void)
{
	return (this->_EnergyPoints);
}

int	ClapTrap::GetHitPoints(void)
{
	return (this->_HitPoints);
}

std::string	ClapTrap::GetName(void)
{
	return (this->_Name);
}
