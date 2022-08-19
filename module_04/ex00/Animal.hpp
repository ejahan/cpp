/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:22:05 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/19 19:20:13 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	protected:

		std::string	type;

	public:

		Animal(void);
		Animal(std::string type);
		Animal( Animal const & other);
		virtual ~Animal(void);

		Animal	&operator=(Animal const &rhs);

		std::string	getType(void) const;
		virtual void	makeSound(void) const;

};

#endif
