/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 05:27:46 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/18 15:24:17 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	private:

		std::string const	_name;
		bool				_signed;
		int const			_grade_sign;
		int const			_grade_exec;

	public:

		Form(void);
		Form(std::string name, int const a, int const b);
		Form(Form const &src);
		~Form(void);

		Form	&operator=(Form const &rhs);

		std::string	GetName(void) const;
		int	GetGradeSign(void) const;
		int	GetGradeExec(void) const;
		bool		GetSigned(void) const;

		void		BeSigned(Bureaucrat const &bureaucrat);

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

std::ostream &operator<<(std::ostream &o, Form const &form);

#endif
