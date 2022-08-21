/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:39:32 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/21 17:51:17 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal
{
	public:

		Dog(void);
		Dog( Dog const & other);
		virtual ~Dog(void);

		Dog	&operator=(Dog const &rhs);

		virtual void	makeSound(void) const;

};

#endif
