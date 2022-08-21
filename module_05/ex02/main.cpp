/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:24:07 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/21 22:54:12 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

# define BLUE "\033[1;34m"
# define YELL "\033[3;33m"
# define NOR "\033[m"

int	main(void)
{

	std::cout << std::endl << "=================================" << std::endl;
	std::cout << "	       	 	    test:" << std::endl;
	std::cout << "=================================" << std::endl << std::endl;

	Bureaucrat	first("first", 3);
	Bureaucrat	second("second", 10);

	PresidentialPardonForm	pres("Bureaucrat");
	RobotomyRequestForm		robo("target");
	ShrubberyCreationForm	crea("trees");

	std::cout << std::endl << "==========================================" << std::endl;
	std::cout << "	       	Presidential Pardon Form :" << std::endl;
	std::cout << "==========================================" << std::endl << std::endl;

	std::cout << "first bureaucrat try to execute PresidentialPardonForm : " << std::endl;
	try
	{
		pres.execute(first);
	}
	catch (Form::NotSignedFormException e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl << "second bureaucrat try to sign PresidentialPardonForm :" << std::endl << std::endl;
	try
	{
		second.signForm(pres);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << pres << std::endl;

	std::cout << "second bureaucrat try to execute :" << std::endl;
	try
	{
		pres.execute(second);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "first bureaucrat try to execute :" << std::endl;
	try
	{
		pres.execute(first);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout << std::endl << "=======================================" << std::endl;
	std::cout << "	       	Robotomy Request Form :" << std::endl;
	std::cout << "=======================================" << std::endl << std::endl;



	std::cout << std::endl << std::endl << "second bureaucrat try to sign RobotomyRequestForm :" << std::endl << std::endl;
	try
	{
		second.signForm(robo);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "second bureaucrat try to execute :" << std::endl << std::endl;
	try
	{
		robo.execute(second);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout << std::endl << "=========================================" << std::endl;
	std::cout << "	       	Shrubbery Creation Form :" << std::endl;
	std::cout << "=========================================" << std::endl << std::endl;



	std::cout << std::endl << std::endl << "second bureaucrat try to sign ShrubberyCreationForm :" << std::endl << std::endl;
	try
	{
		second.signForm(crea);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "second bureaucrat try to execute :" << std::endl;
	try
	{
		crea.execute(second);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
