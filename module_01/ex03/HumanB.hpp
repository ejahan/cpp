/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 16:44:15 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/03 04:31:26 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	private:
		Weapon		*_Weapon;
		std::string	_name;

	public:
		HumanB(std::string str);
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon &weapon);
};

#endif
