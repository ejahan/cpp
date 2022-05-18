/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:24:07 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/18 06:14:35 by ejahan           ###   ########.fr       */
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
	try {
		std::cout << BLUE << "============ FIRST TEST ==========" << NOR << std::endl;
		std::cout << YELL << "=== SHRUBBERY ===" << NOR << std::endl;
		Bureaucrat	A("Albert", 146);
		Bureaucrat	B("Bogoss", 140);
		Bureaucrat	C("Cazzo", 132);
		ShrubberyCreationForm	F("maison");
		std::cout << A << std::endl;
		std::cout << B << std::endl;
		std::cout << C << std::endl;
		std::cout << F << std::endl;
		A.executeForm(F);
		B.executeForm(F);
		C.executeForm(F);
		A.signForm(F);
		B.signForm(F);
		C.signForm(F);
		A.executeForm(F);
		B.executeForm(F);
		C.executeForm(F);
	}
	catch(const std::exception& e) { std::cout << e.what() << std::endl; }
	try {
		std::cout << BLUE << "============ SECOND TEST ==========" << NOR << std::endl;
		std::cout << YELL << "=== ROBOTOMY ===" << NOR << std::endl;
		Bureaucrat	D("Denis", 79);
		Bureaucrat	E("Edouard", 50);
		Bureaucrat	F("Firmin", 37);
		Bureaucrat	G("Gaston", 29);
		Bureaucrat	H("Hercules", 8);
		Bureaucrat	I("Ines", 14);
		RobotomyRequestForm	M("hospital");
		std::cout << D << std::endl;
		std::cout << E << std::endl;
		std::cout << F << std::endl;
		std::cout << G << std::endl;
		std::cout << H << std::endl;
		std::cout << I << std::endl;
		std::cout << M << std::endl;
		D.executeForm(M);
		E.executeForm(M);
		F.executeForm(M);
		D.signForm(M);
		E.signForm(M);
		F.signForm(M);
		D.executeForm(M);
		E.executeForm(M);
		F.executeForm(M);
		G.executeForm(M);
		H.executeForm(M);
		I.executeForm(M);
	}
	catch(const std::exception& e) { std::cout << e.what() << std::endl; }
		try {
		std::cout << BLUE << "============ THIRD TEST ==========" << NOR << std::endl;
		std::cout << YELL << "=== PRESIDENTIAL PARDON ===" << NOR << std::endl;
		// Bureaucrat	J("Joelle", 30);
		// Bureaucrat	K("Kenny", 20);
		Bureaucrat	L("Laurent", 1);
		PresidentialPardonForm	P("galaxy");
		// std::cout << J << std::endl;
		// std::cout << K << std::endl;
		std::cout << L << std::endl;
		std::cout << P << std::endl;
		// J.executeForm(P);
		// K.executeForm(P);
		L.executeForm(P);
		// J.signForm(P);
		// K.signForm(P);
		L.signForm(P);
		// J.executeForm(P	);
		// K.executeForm(P	);
		L.executeForm(P	);
	}
	catch(const std::exception& e) { std::cout << e.what() << std::endl; }

/*	std::cout << std::endl;
	std::cout << "------------ TEST BUREAUCRAT CLASS ------------" << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "------------ Test upper limit ------------" << std::endl;
	std::cout << std::endl;

	Bureaucrat		maleb("maleb", 3);

	for (int i = 0; i < 3; i++)
	{
		try
		{
			maleb.increase_grade();
			std::cout << maleb;
		}
		catch (std::exception const & e)
		{
			std::cout << e.what();
		}
	}

	std::cout << std::endl;
	std::cout << "------------ Test lower limit ------------" << std::endl;
	std::cout << std::endl;

	Bureaucrat		dylan("dylan", 148);

	for (int i = 0; i < 3; i++)
	{
		try
		{
			dylan.decrease_grade();
			std::cout << dylan;
		}
		catch (std::exception const & e)
		{
			std::cout << e.what();
		}
	}

	std::cout << std::endl;
	std::cout << "------------ Test invalid contructor value ------------" << std::endl;
	std::cout << std::endl;

	try
	{
		Bureaucrat		uncle("uncle", 1000);
		std::cout << uncle;
	}
	catch (std::exception const & e)
	{
		std::cout << e.what();
	}

	try
	{
		Bureaucrat		uncle("uncle", 0);
		std::cout << uncle;
	}
	catch (std::exception const & e)
	{
		std::cout << e.what();
	}

	std::cout << std::endl;
	std::cout << "------------ Test FORMS ------------" << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "------------ Test execute signed form ------------" << std::endl;
	std::cout << std::endl;

	try
	{
		Bureaucrat					joj("joj", 1);
		Bureaucrat					joblux("joblux", 150);

		ShrubberyCreationForm		tree("tree");
		RobotomyRequestForm			robotomy("robotomy");
		PresidentialPardonForm		presidential("joj");

		joj.executeForm(tree);
		joj.executeForm(robotomy);
		joj.executeForm(presidential);

		std::cout << std::endl;

		joj.signForm(tree);
		joj.signForm(robotomy);
		joj.signForm(presidential);

		std::cout << std::endl;

		joj.executeForm(tree);
		joj.executeForm(robotomy);
		joj.executeForm(presidential);

		std::cout << std::endl;

		joblux.executeForm(tree);
		joblux.executeForm(robotomy);
		joblux.executeForm(presidential);
		
	}
	catch (std::exception const & e)
	{
		std::cout << e.what();
	}*/

	// try
	// {
	// 	Form	test("FirstForm", 150, 35);
	// }
	// catch (Form::GradeTooHighException e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch (Form::GradeTooLowException e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << test << std::endl;



	
	// std::cout << std::endl << "	Valid grade in declaration :" << std::endl;
	// std::cout << "====================================" << std::endl << std::endl;
	// Bureaucrat bureaucrat1("Bureaucrat1", 1);
	// std::cout << bureaucrat1 << std::endl;
	// try
	// {
	// }
	// catch (Bureaucrat::GradeTooHighException e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch (Bureaucrat::GradeTooLowException e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }



	// std::cout << std::endl << "	Unvalid grade in declaration (too low) :" << std::endl;
	// std::cout << "================================================" << std::endl << std::endl;
	// try
	// {
	// 	Bureaucrat bureaucrat2("Bureaucrat2", 0);
	// }
	// catch (Bureaucrat::GradeTooHighException e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch (Bureaucrat::GradeTooLowException e)
	// {
	// 	std::cout << e.what() << std::endl << std::endl;
	// }



	// std::cout << std::endl << "	Unvalid grade in declaration (too high) :" << std::endl;
	// std::cout << "=================================================" << std::endl << std::endl;
	// try
	// {
	// 	Bureaucrat bureaucrat3("Bureaucrat3", 151);
	// }
	// catch (Bureaucrat::GradeTooHighException e)
	// {
	// 	std::cout << e.what() << std::endl << std::endl;
	// }
	// catch (Bureaucrat::GradeTooLowException e)
	// {
	// 	std::cout << e.what() << std::endl << std::endl;
	// }



	// std::cout << std::endl << "	Valid grade :" << std::endl;
	// std::cout << "=====================" << std::endl << std::endl;
	// Bureaucrat test1("BureaucratTest", 100);

	// std::cout << test1 << std::endl;
	// std::cout << "** Increment ** " << std::endl;
	// try
	// {
	// 	test1.DecreaseBureaucrat();
	// }
	// catch (Bureaucrat::GradeTooHighException e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch (Bureaucrat::GradeTooLowException e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << test1 << std::endl;

	// std::cout << "** Decrease **" << std::endl;
	// try
	// {
	// 	test1.IncrementBureaucrat();
	// }
	// catch (Bureaucrat::GradeTooHighException e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch (Bureaucrat::GradeTooLowException e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << test1 << std::endl;



	// std::cout << std::endl << "	Unvalid grade :" << std::endl;
	// std::cout << "=======================" << std::endl << std::endl;
	// Bureaucrat test2("BureaucratWrong", 150);

	// std::cout << test2 << std::endl;
	// std::cout << "** Increment ** " << std::endl;
	// try
	// {
	// 	test2.DecreaseBureaucrat();
	// }
	// catch (Bureaucrat::GradeTooHighException e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch (Bureaucrat::GradeTooLowException e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << test2 << std::endl;

	// std::cout << "** Decrease **" << std::endl;
	// try
	// {
	// 	test2.IncrementBureaucrat();
	// }
	// catch (Bureaucrat::GradeTooHighException e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch (Bureaucrat::GradeTooLowException e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << test2 << std::endl;



	// std::cout << std::endl << "	Unvalid grade :" << std::endl;
	// std::cout << "=======================" << std::endl << std::endl;
	// Bureaucrat test3("BureaucratWrong", 1);

	// std::cout << test3 << std::endl;
	// std::cout << "** Decrease **" << std::endl;
	// try
	// {
	// 	test3.IncrementBureaucrat();
	// }
	// catch (Bureaucrat::GradeTooHighException e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch (Bureaucrat::GradeTooLowException e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << test3 << std::endl;

	// std::cout << "** Increment ** " << std::endl;
	// try
	// {
	// 	test3.DecreaseBureaucrat();
	// }
	// catch (Bureaucrat::GradeTooHighException e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch (Bureaucrat::GradeTooLowException e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << test3 << std::endl;

	return (0);
}
