/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 03:01:41 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/20 04:50:10 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _Name("Unknow"), _HitPoints(10), _EnergyPoints(10), _Attack_damage(0)
{
	std::cout << "A ClapTrap has been created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _HitPoints(10), _EnergyPoints(10), _Attack_damage(0)
{
	std::cout << "A ClapTrap has been created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
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

ClapTrap::~ClapTrap()
{
	std::cout << "A ClapTrap has been destroyed" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_EnergyPoints >= 1)
	{
		this->_EnergyPoints -= 1;
		std::cout << std::endl << std::endl << this->_Name << " attacks " << target \
			<< ", causing " << this->_Attack_damage << " points of damage" << std::endl;
	}
	if (this->_EnergyPoints == 0)
		std::cout << this->_Name << " doesn't have enought Energy to continue, " \
			<< target << " is the winner" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HitPoints >= 1)
	{
		this->_HitPoints -= amount;
		std::cout << std::endl << std::endl << this->_Name << " has been attacked -> " << RED << "-" \
			<< amount << NOR << " HitPoints" << std::endl;
		if (this->_HitPoints <= 0)
			std::cout << this->_Name << " is dead" << std::endl;

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
		std::cout << std::endl << std::endl << this->_Name << " has been repaired -> " << GREEN << "+" \
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
