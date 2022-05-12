/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 01:31:00 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/12 06:27:33 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_nb = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int nb)
{
	this->_nb = nb * 256;
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(float nb)
{
	this->_nb = (int)roundf(nb * 256);
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

float	Fixed::toFloat(void) const
{
	float nb;
	nb = (float)this->_nb / 256;
	return (nb);
}

int	Fixed::toInt(void) const
{
	return (this->_nb / 256);
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_nb = rhs._nb;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}
