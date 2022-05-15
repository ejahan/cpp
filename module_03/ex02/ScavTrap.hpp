/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 05:36:21 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/15 03:36:19 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:

		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);
		void	attack(const std::string &target);
		void	guardGate(void);

};

#endif
