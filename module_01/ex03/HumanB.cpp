/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 16:44:13 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/03 04:31:15 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str) : _name(str), _Weapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void)
{
	if (!this->_Weapon)
		std::cout << this->_name << " is desarmed " << std::endl;
	else
	{
		std::cout << this->_name << " attacks with their ";
		std::cout << this->_Weapon->getType() << std::endl;
	}
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_Weapon = &weapon;
	return ;
}
