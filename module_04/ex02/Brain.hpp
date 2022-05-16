/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:41:20 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/16 20:21:54 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class	Brain
{
	public:

		Brain(void);
		Brain(Brain const &src);
		~Brain(void);

		Brain	&operator=(Brain const &rhs);

		std::string	ideas[100];

};

#endif
