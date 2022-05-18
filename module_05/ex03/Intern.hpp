/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 06:17:25 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/18 06:28:54 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

class	Intern
{
	public:

		Intern(void);
		Intern(Intern const &src);
		~Intern;

		Intern	&operator=(Intern const &intern);

		Form	*makeForm(std::string name, std::string target);

};

#endif
