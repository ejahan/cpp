/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 04:15:11 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/19 22:16:44 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	protected:

		std::string	_type;

	public:

		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const & other);
		virtual ~WrongAnimal(void);

		WrongAnimal	&operator=(WrongAnimal const &rhs);

		std::string	getType(void) const;
		void	makeSound(void) const;

};

#endif
