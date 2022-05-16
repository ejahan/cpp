/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 04:16:24 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/16 20:05:01 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:

		WrongCat(void);
		WrongCat(WrongCat const &src);
		~WrongCat(void);

		WrongCat	&operator=(WrongCat const &rhs);

		void	makeSound(void) const;

};

#endif
