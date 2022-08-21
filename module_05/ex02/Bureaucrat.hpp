/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:24:21 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/21 22:13:41 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"
#include <stdlib.h>

class	Form;

class	Bureaucrat
{
	private:

		std::string const	_name;
		int					_grade;

	public:

		Bureaucrat(void);
		Bureaucrat(std::string const name, int i);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat(void);

		Bureaucrat	&operator=(Bureaucrat const &rhs);

		std::string	GetName(void) const;
		int			GetGrade(void) const;

		void	IncrementBureaucrat(void);
		void	DecreaseBureaucrat(void);
		void	signForm(Form &form);
		void	executeForm(Form const &form);

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("ERROR : grade too high");
				};
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("ERROR : grade too low");
				}
		};

};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &Bureaucrat);

#endif
