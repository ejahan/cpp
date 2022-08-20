/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:24:07 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/20 14:51:39 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << std::endl << "	Valid grade in declaration :" << std::endl;
	std::cout << "====================================" << std::endl << std::endl;
	Bureaucrat bureaucrat1("Bureaucrat1", 1);
	std::cout << bureaucrat1 << std::endl;
	try
	{
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}



	std::cout << std::endl << "	Unvalid grade in declaration (too low) :" << std::endl;
	std::cout << "================================================" << std::endl << std::endl;
	try
	{
		Bureaucrat bureaucrat2("Bureaucrat2", 0);
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}



	std::cout << std::endl << "	Unvalid grade in declaration (too high) :" << std::endl;
	std::cout << "=================================================" << std::endl << std::endl;
	try
	{
		Bureaucrat bureaucrat3("Bureaucrat3", 151);
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}



	std::cout << std::endl << "	Valid grade :" << std::endl;
	std::cout << "=====================" << std::endl << std::endl;
	Bureaucrat test1("BureaucratTest", 100);

	std::cout << test1 << std::endl;
	std::cout << "** Decrease **" << std::endl;
	try
	{
		test1.DecreaseBureaucrat();
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << test1 << std::endl;

	std::cout << "** Increment ** " << std::endl;
	try
	{
		test1.IncrementBureaucrat();
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << test1 << std::endl;



	std::cout << std::endl << "	Unvalid grade :" << std::endl;
	std::cout << "=======================" << std::endl << std::endl;
	Bureaucrat test2("BureaucratWrong", 150);

	std::cout << test2 << std::endl;
	std::cout << "** Decrease **" << std::endl;
	try
	{
		test2.DecreaseBureaucrat();
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << test2 << std::endl;

	std::cout << "** Increment ** " << std::endl;
	try
	{
		test2.IncrementBureaucrat();
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << test2 << std::endl;



	std::cout << std::endl << "	Unvalid grade :" << std::endl;
	std::cout << "=======================" << std::endl << std::endl;
	Bureaucrat test3("BureaucratWrong", 1);

	std::cout << test3 << std::endl;
	std::cout << "** Increment ** " << std::endl;
	try
	{
		test3.IncrementBureaucrat();
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << test3 << std::endl;

	std::cout << "** Decrease **" << std::endl;
	try
	{
		test3.DecreaseBureaucrat();
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << test3 << std::endl;

	return (0);
}
