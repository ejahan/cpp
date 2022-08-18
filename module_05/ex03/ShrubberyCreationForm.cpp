/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 04:42:38 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/18 15:39:19 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void)
	: Form("ShrubberyCreationForm", 145, 137), _target("unknow")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
{
	*this = src;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	this->_target = src._target;
	return (*this);
}

std::string	ShrubberyCreationForm::GetTarget(void)
{
	return (this->_target);
}

void	ShrubberyCreationForm::act(void) const
{
	std::string	name;

	name = this->_target + "_shrubbery";
	std::ofstream	ofs(name.c_str());

	ofs << "               ,@@@@@@@,                  " << std::endl;
	ofs << "       ,,,.   ,@@@@@@/@@,  .oo8888o.      " << std::endl;
	ofs << "    ,&%%&%&&%,@@@@@/@@@@@@,8888888/8o     " << std::endl;
	ofs << "   ,%&%&&%&&%,@@@@@@@/@@@8888888888/88'    " << std::endl;
	ofs << "   %&&%&%&/%&&%@@@@@/ /@@@88888888888'    " << std::endl;
	ofs << "   %&&%/ %&%%&&@@  V /@@' `888 `/88'     " << std::endl;
	ofs << "   `&% ` /%&'     |.|         '|8'       " << std::endl;
	ofs << "       |o|        | |         | |         " << std::endl;
	ofs << "       |.|        | |         | |         " << std::endl;
	ofs << "/__/_\\/ .__//_/__/  ,__//__\\/.  \\_//__/_" << std::endl;

	ofs.close();

	return ;
}
