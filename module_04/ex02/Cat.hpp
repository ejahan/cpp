/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:28:21 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/16 20:20:45 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private:

		Brain	*_brain;

	public:

		Cat(void);
		Cat(Cat const &src);
		~Cat(void);

		Cat	&operator=(Cat const &rhs);

		virtual void	makeSound(void) const;

};

#endif