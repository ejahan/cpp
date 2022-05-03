/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 16:44:22 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/03 01:20:32 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

// Implement a Weapon class that has:

// • A private attribute type, which is a string.
// • A getType() member function that returns a const reference to type.
// • A setType() member function that sets type using the new one passed as parameter.

class	Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(std::string str);
		~Weapon(void);
		const std::string   &getType();
        void                setType(std::string str);
};

#endif
