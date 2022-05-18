/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 06:17:25 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/18 20:44:25 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"

class	Intern
{
	public:

		Intern(void);
		Intern(Intern const &src);
		~Intern(void);

		Intern	&operator=(Intern const &intern);

		Form	*makeForm(std::string name, std::string target);

		class	WrongFormException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("ERROR : Form doesn't exist");
				}
		};

};

#endif
