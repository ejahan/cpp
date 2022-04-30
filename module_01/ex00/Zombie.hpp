/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 00:58:51 by ejahan            #+#    #+#             */
/*   Updated: 2022/04/30 23:50:59 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class	Zombie
{
	private:
		std::string _name;

	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	randomChump(std::string name);
		Zombie	*newZombie(std::string name);
};

#endif
