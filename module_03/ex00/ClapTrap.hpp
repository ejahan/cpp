/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 03:01:54 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/15 02:04:20 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	private:

		std::string	_Name;
		int			_HitPoints;
		int			_EnergyPoints;
		int			_Attack_damage;

	public:

		ClapTrap(void);
		ClapTrap(std::string name);
		~ClapTrap(void);
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string	GetName(void);
		int		GetEnergy(void);
		int		GetHitPoints(void);

};

#endif
