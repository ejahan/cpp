/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:53:44 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/20 19:33:30 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>

class	Convert
{
	private:

		std::string	_str;

	public:

		Convert(void);
		Convert(std::string str);
		Convert(Convert const &src);
		~Convert(void);

		std::string	Get_str(void) const;
		char		PrintChar(void) const;
		// int			PrintInt(void);
		// float		PrintFloat(void);
		// double		PrintDouble(void);

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
