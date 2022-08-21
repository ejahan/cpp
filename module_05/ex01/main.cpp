/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:24:07 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/21 21:49:03 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << "=================================" << std::endl;
	std::cout << "			Form OK :" << std::endl;
	std::cout << "=================================" << std::endl;
	try
	{
		Form	test("FirstForm", 150, 35);
		std::cout << test << std::endl;
	}
	catch (Form::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "=================================" << std::endl;
	std::cout << "	     Invalid grade (151):" << std::endl;
	std::cout << "=================================" << std::endl;
	try
	{
		Form	test2("FirstForm", 151, 35);
		std::cout << test2 << std::endl;
	}
	catch (Form::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl << "=================================" << std::endl;
	std::cout << "	       Invalid grade (0):" << std::endl;
	std::cout << "=================================" << std::endl;
	try
	{
		Form	test("FirstForm", 0, 35);
		std::cout << test << std::endl;
	}
	catch (Form::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << std::endl << "=================================" << std::endl;
	std::cout << "	       	 	    test:" << std::endl;
	std::cout << "=================================" << std::endl << std::endl;
	Bureaucrat	first("first", 140);
	Bureaucrat	second("second", 3);
	Form	form("FirstForm", 135, 35);
	std::cout << std::endl << "before :" << std::endl << std::endl;
	std::cout << first << form<< std::endl << std::endl;
	try
	{
		first.signForm(form);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "after :" << std::endl;
	std::cout<< form<< std::endl;
	std::cout << std::endl << "before :" << std::endl << std::endl;
	std::cout << second << form<< std::endl;
	try
	{
		second.signForm(form);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl << "after :" << std::endl;
	std::cout << form<< std::endl;

	return (0);
}
