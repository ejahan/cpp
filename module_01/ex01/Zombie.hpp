/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:54:34 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/01 00:19:21 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	private:
		std::string	_name;

	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		Zombie	*zombieHorde(int N, std::string name);
};

#endif
