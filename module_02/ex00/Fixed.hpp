/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 05:19:51 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/05 07:09:28 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int	nb;
		const int static	nb_bits = 8;
	
	public:
		Fixed();
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif