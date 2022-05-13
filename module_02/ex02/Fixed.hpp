/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 01:12:32 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/13 02:56:04 by ejahan           ###   ########.fr       */
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

		float		toFloat(void) const;
		int			toInt(void) const;
		Fixed		&min(Fixed &a, Fixed &b);
		const Fixed	&min(Fixed const &a, Fixed const &b);
		Fixed		&max(Fixed &a, Fixed &b);
		const Fixed	&max(Fixed const &a, Fixed const &b);

		int		operator>(Fixed const &rhs);
		int		operator<(Fixed const &rhs);
		int		operator>=(Fixed const &rhs);
		int		operator<=(Fixed const &rhs);
		int		operator==(Fixed const &rhs);
		int		operator!=(Fixed const &rhs);

		Fixed	&operator=(Fixed const &rhs);
		Fixed	operator+(Fixed const &rhs);
		Fixed	operator-(Fixed const &rhs);
		Fixed	operator*(Fixed const &rhs);
		Fixed	operator/(Fixed const &rhs);

		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);

};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

#endif
