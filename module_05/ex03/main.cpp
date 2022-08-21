/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:24:07 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/21 23:10:50 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

# define BLUE "\033[1;34m"
# define YELL "\033[3;33m"
# define NOR "\033[m"

int	main(void)
{
	std::cout << std::endl << "	**ROBOTOMY REQUEST**" << std::endl;
	std::cout << "============================" << std::endl << std::endl;
	try
	{
		Intern intern;
		Form* form;
		form = intern.makeForm("robotomy request", "target");
		delete form;
	}
	catch (Intern::WrongFormException e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout << std::endl << std::endl << "	**PRESIDENTIAL PARDON**" << std::endl;
	std::cout << "===============================" << std::endl << std::endl;
	try
	{
		Intern intern;
		Form* form;
		form = intern.makeForm("presidential pardon", "target");
		delete form;
	}
	catch (Intern::WrongFormException e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout << std::endl << std::endl << "	**SHRUBBERY CREATION**" << std::endl;
	std::cout << "==============================" << std::endl << std::endl;
	try
	{
		Intern intern;
		Form* form;
		form = intern.makeForm("shrubbery creation", "target");
		delete form;
	}
	catch (Intern::WrongFormException e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout << std::endl << std::endl << "	**ERROR**" << std::endl;
	std::cout << "=================" << std::endl << std::endl;
	try
	{
		Intern intern;
		Form* form;
		form = intern.makeForm("qwertyuiop", "target");
		delete form;
	}
	catch (Intern::WrongFormException e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
