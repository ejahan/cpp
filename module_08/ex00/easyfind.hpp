/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:32:24 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/16 15:28:04 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
 
class	NotFoundException : public std::exception
{
	public:
		virtual const char*	what() const throw()
		{
			return ("ERROR : occurrence not found");
		};
};

template <typename T>
void	easyfind(T container, int i)
{
	typename T::iterator	it;
	it = find(container.begin(), container.end(), i);
	if (it != container.end())
		std::cout << "OK : occurrence found" << std::endl;
	else
		throw NotFoundException();
};

#endif
