/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 05:19:51 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/12 01:18:23 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int	_nb;
		const int static	_nb_bits = 8;

	public:
		Fixed();
		Fixed(Fixed const &rhs);
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed	&operator=(Fixed const &rhs);

};

#endif
