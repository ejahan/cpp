/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 06:17:19 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/18 06:30:53 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const &src)
{
	*this = src;
	return ;
}

Intern::~Intern()
{
	return ;
}

Intern	&Intern::operator=(Intern const &src)
{
	this->_signed = src._signed;
	return (*this);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	
}
