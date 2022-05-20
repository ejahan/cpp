/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 03:01:41 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/20 05:29:24 by ejahan           ###   ########.fr       */
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

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "a ClapTrap has been destroyed" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_Name = rhs._Name;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_Attack_damage = rhs._Attack_damage;
	return (*this);
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
		std::cout << this->_Name << " has been attacked -> " << RED "-" \
			<< amount << NOR << " HitPoints" << std::endl;
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
		std::cout << this->_Name << " has been repaired -> " << GREEN "+" \
			<< amount << NOR << " HitPoints"<< std::endl;
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

int	ClapTrap::GetAttackDamage(void)
{
	return (this->_Attack_damage);
}

std::string	ClapTrap::GetName(void)
{
	return (this->_Name);
}
