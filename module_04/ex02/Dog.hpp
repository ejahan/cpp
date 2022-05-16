/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:39:32 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/16 20:17:56 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	private:

		Brain	*_brain;

	public:

		Dog(void);
		Dog(Dog const &src);
		~Dog(void);

		Dog	&operator=(Dog const &rhs);

		virtual void	makeSound(void) const;

};

#endif
