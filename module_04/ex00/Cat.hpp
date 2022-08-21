/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:28:21 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/21 17:36:01 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{
	public:

		Cat(void);
		Cat( Cat const & other);
		virtual ~Cat(void);

		Cat	&operator=(Cat const &rhs);

		virtual void	makeSound(void) const;

};

#endif