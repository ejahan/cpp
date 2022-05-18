/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:23:18 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/18 01:17:56 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("unknow"), _grade(1)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string const name, int i) : _name(name), _grade(i)
{
	if (this->_grade > 150)
		throw GradeTooHighException();
	if (this->_grade < 1)
		throw GradeTooLowException();
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

std::string	Bureaucrat::GetName(void) const
{
	return (this->_name);
}

int	Bureaucrat::GetGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::IncrementBureaucrat(void)
{
	this->_grade--;
	if (this->_grade < 1)
		throw GradeTooLowException();
	return ;
}

void	Bureaucrat::DecreaseBureaucrat(void)
{
	this->_grade++;
	if (this->_grade > 150)
		throw GradeTooHighException();
	return ;
}

void		Bureaucrat::signForm(Form &form)
{
	std::cout << this->_name << " signed " << form.GetName() << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &src)
{
	this->_grade = src._grade;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &bureaucrat)
{
	o << bureaucrat.GetName() << " , bureaucrat grade " << bureaucrat.GetGrade() << std::endl;
	return (o);
}
