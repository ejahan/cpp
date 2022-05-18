/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 05:27:35 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/18 06:11:46 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("unknow"), _grade_sign(50), _grade_exec(50)
{
	this->_signed = false;
	return ;
}

Form::Form(std::string const name, int const a, int const b)
	: _name(name), _grade_sign(a), _grade_exec(b)
{
	this->_signed = false;
	if (this->_grade_sign > 150 || this->_grade_exec > 150)
		throw GradeTooHighException();
	if (this->_grade_sign < 1 || this->_grade_exec < 1)
		throw GradeTooLowException();
	return ;
}

Form::Form(Form const &src)
	: _name(src._name), _grade_exec(src._grade_exec), _grade_sign(src._grade_sign)
{
	*this = src;
	return ;
}

Form::~Form()
{
	return ;
}

std::string	Form::GetName(void) const
{
	return (this->_name);
}

int const	Form::GetGradeSign(void) const
{
	return (this->_grade_sign);
}

int const	Form::GetGradeExec(void) const
{
	return (this->_grade_exec);
}

bool		Form::GetSigned(void) const
{
	return (this->_signed);
}

// ici :
void		Form::BeSigned(Bureaucrat const &bureaucrat)
{
	try
	{
		if (bureaucrat.GetGrade() <= this->_grade_sign)
			this->_signed = true;
		else
			throw GradeTooLowException();
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
}

// ici :
void		Form::execute(Bureaucrat const &executor) const
{
	try
	{
		if (this->_signed == false)
			throw NotSignedFormException();
		if (executor.GetGrade() > this->_grade_exec)
			throw GradeTooLowException();
		this->act();
	}
	catch (Form::NotSignedFormException e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException ex)
	{
		std::cout << ex.what() << std::endl;
	}
}

Form	&Form::operator=(Form const &src)
{
	this->_signed = src._signed;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Form const &Form)
{
	o << std::endl << "Form name	: "<< Form.GetName() << std::endl \
		<< "Grade to sign	: " << Form.GetGradeSign() << std::endl \
		<< "Grade to exec	: " << Form.GetGradeExec() << std::endl << "Is signed ?	";
	if (Form.GetSigned() == true)
		o << "yes" << std::endl;
	else
		o << "no" << std::endl;
	return (o);
}
