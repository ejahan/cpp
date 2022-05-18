/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 06:17:19 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/18 20:51:15 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const &src)
{
	*this = src;
	return ;
}

Intern::~Intern(void)
{
	return ;
}

Intern	&Intern::operator=(Intern const &src)
{
	return (*this);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	Form *form;
	std::string	str[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	int	i;

	i = 0;
	while (i < 3 && str[i] != name)
		i++;
	switch (i)
	{
		case 0:
		{
			form = new PresidentialPardonForm(target);
			break;
		}
		case 1:
		{
			form = new RobotomyRequestForm(target);
			break;
		}
		case 2:
		{
			form = new ShrubberyCreationForm(target);
		}
		default:
			throw WrongFormException();
	}
	std::cout << "Intern creates " << form->GetName() << std::endl;
	return (form);
}
