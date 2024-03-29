/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 01:31:43 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/13 01:09:47 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int	_nb;
		const int static	_nb_bits = 8;

	public:
		Fixed(void);
		Fixed(int nb);
		Fixed(float nb);
		Fixed(Fixed const &rhs);
		~Fixed(void);
		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed	&operator=(Fixed const &rhs);

};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

#endif
