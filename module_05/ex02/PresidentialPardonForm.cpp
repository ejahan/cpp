/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 02:44:38 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/21 21:59:52 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
	: Form("PresidentialPardonForm", 25, 5), _target("unknow")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("PresidentialPardonForm", 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
{
	*this = src;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	this->_target = src._target;
	return (*this);
}

std::string	PresidentialPardonForm::GetTarget(void)
{
	return (this->_target);
}

void	PresidentialPardonForm::act(void) const
{
	std::cout << this->_target << " has been forgiven by Zaphod Beeblebrox" << std::endl;
	return ;
}
