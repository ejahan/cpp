/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:53:44 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/21 06:33:40 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
// #include <cstdlib>

class	Convert
{
	private:

		std::string	_str;
		double		_nb_d;
		// float		_nb_f;

	public:

		Convert(void);
		Convert(std::string str, double nb_d);
		Convert(Convert const &src);
		~Convert(void);

		std::string	Get_str(void) const;
		char		PrintChar(void) const;
		int			PrintInt(void) const;
		float		PrintFloat(void) const;
		double		PrintDouble(void) const;

		Convert	&operator=(Convert const &src);

		class	ImpossibleException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("Impossible");
				}
		};
		class	NoDisplayableException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("Non displayable");
				}
		};

};

std::ostream &operator<<(std::ostream &o, Convert const &convert);

#endif
