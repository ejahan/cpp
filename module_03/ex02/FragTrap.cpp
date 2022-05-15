/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 03:25:23 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/15 03:32:54 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Unknow", 100, 100, 30)
{
	std::cout << "a FragTrap has been created" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "a FragTrap has been created" << std::endl;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << this->_Name << " : a FragTrap has been destroyed" << std::endl;
	return ;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_EnergyPoints >= 1)
	{
		this->_EnergyPoints -= 1;
		std::cout << "FragTrap " << this->_Name << " attacks " << target \
			<< ", causing " << this->_Attack_damage << " points of damage" << std::endl;
	}
	if (this->_EnergyPoints == 0)
		std::cout << "FragTrap " << this->_Name << " doesn't have enought Energy to continue, " << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_Name << " is asking you to high five!" << std::endl;
}
