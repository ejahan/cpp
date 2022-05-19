/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:53:44 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/19 05:26:12 by ejahan           ###   ########.fr       */
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

		std::string	Get_str(void);

		Convert	&operator=(Convert const &src);

		class	NotSignedFormException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("ERROR : Form is not signed");
				}
		};
};

char int float double

#endif
