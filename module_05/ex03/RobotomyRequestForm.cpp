/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 04:39:10 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/21 23:01:36 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm(void)
	: Form("RobotomyRequestForm", 72, 45), _target("unknow")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("RobotomyRequestForm", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
{
	*this = src;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	this->_target = src._target;
	return (*this);
}

std::string	RobotomyRequestForm::GetTarget(void)
{
	return (this->_target);
}

int		random(int min, int max)
{
	static bool first = true;
	if (first) {
		srand( time(NULL) );
		first = false;
	}
	return min + rand() % (( max + 1 ) - min);
}

void	RobotomyRequestForm::act(void) const
{
	int	i = random(1, 2);

	std::cout << " ** Drill sounds **" << std::endl;
	if (i == 1)
		std::cout << this->_target << " has been robotomized with success!" << std::endl;
	else
		std::cout << " The operation failed..." << std::endl;
	return ;
}
