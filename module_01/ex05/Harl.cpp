/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:03:19 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/04 07:04:24 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple";
	std::cout << "-pickle-specialketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put";
	std::cout << " enough bacon in my burger! If you did, I wouldn't be asking for more!";
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming";
	std::cout << " for years whereas you started working here since last month.";
	std::cout << std::endl;
}
void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i;

	i = 0;
	std::string	tab[4] = {{"DEBUG"}, {"INFO"}, {"WARNING"}, {"ERROR"}};
	void (Harl::*functptr[4])() = {{&Harl::debug}, {&Harl::info}, {&Harl::warning}, {&Harl::error}};

	while (i < 4)
	{
		if (tab[i].compare(level) == 0)
		{
			(this->*functptr[i])();
			return ;
		}
		i++;
	}
	std::cout << "ERROR : invalid level" << std::endl;
}
