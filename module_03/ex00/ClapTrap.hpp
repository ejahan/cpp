/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 03:01:54 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/20 04:49:18 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

# define BLUE "\033[1;34m"
# define YELL "\033[3;33m"
# define NOR "\033[m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define PINK "\033[1;35m"

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
		ClapTrap(ClapTrap const &claptrap);
		~ClapTrap(void);

		ClapTrap	&operator=(ClapTrap const &rhs);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string	GetName(void);
		int		GetEnergy(void);
		int		GetHitPoints(void);
		int		GetAttackDamage(void);

};

#endif
