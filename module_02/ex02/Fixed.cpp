/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 01:12:15 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/19 23:15:15 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_nb = 0;
	return ;
}

Fixed::Fixed(int nb)
{
	this->_nb = nb * 256;
	return ;
}

Fixed::Fixed(float nb)
{
	this->_nb = (int)roundf(nb * 256);
	return ;
}

Fixed::Fixed(Fixed const &rhs)
{
	*this = rhs;
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

/*
** fonctions membres
** =============================================================================
*/

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_nb);
}

void	Fixed::setRawBits(int const raw)
{
	this->_nb = raw;
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

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a._nb < b._nb)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a._nb < b._nb)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a._nb > b._nb)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a._nb > b._nb)
		return (a);
	return (b);
}

/*
** operateurs
** =============================================================================
*/

int		Fixed::operator>(Fixed const &rhs)
{
	if (this->toFloat() > rhs.toFloat())
		return (1);
	return (0);
}

int		Fixed::operator<(const Fixed &rhs)
{
	if (this->toFloat() < rhs.toFloat())
		return (1);
	return (0);
}

int		Fixed::operator>=(Fixed const &rhs)
{
	if (this->toFloat() >= rhs.toFloat())
		return (1);
	return (0);
}

int		Fixed::operator<=(Fixed const &rhs)
{
	if (this->toFloat() <= rhs.toFloat())
		return (1);
	return (0);
}

int		Fixed::operator==(Fixed const &rhs)
{
	if (this->toFloat() == rhs.toFloat())
		return (1);
	return (0);
}

int		Fixed::operator!=(Fixed const &rhs)
{
	if (this->toFloat() != rhs.toFloat())
		return (1);
	return (0);
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	this->_nb = rhs._nb;
	return (*this);
}

Fixed	Fixed::operator+(Fixed const &rhs)
{
	Fixed	fixed(this->toFloat() + rhs.toFloat());
	return (fixed);
}

Fixed	Fixed::operator-(Fixed const &rhs)
{
	Fixed	fixed(this->toFloat() - rhs.toFloat());
	return (fixed);
}

Fixed	Fixed::operator*(Fixed const &rhs)
{
	Fixed	fixed(this->toFloat() * rhs.toFloat());
	return (fixed);
}

Fixed	Fixed::operator/(Fixed const &rhs)
{
	if (rhs.toFloat() != 0)
		return (Fixed(this->toFloat() / rhs.toFloat()));
	else
		std::cout << "ERROR : You can't divide by zero" << std::endl;
	return (*this);
}


// Fixed			Fixed::operator/( Fixed const & rhs )
// {
// 	return Fixed(this->toFloat() / rhs.toFloat());
// }

// Fixed		Fixed::operator/( Fixed const & other ) const {
// 	if (other.toFloat() != 0) {
// 		return Fixed(this->toFloat() / other.toFloat());
// 	}
// 	else
// 		throw std::runtime_error("Error: Divsion by 0.");
// }

Fixed	Fixed::operator++(void)
{
	this->_nb++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed		tmp;

	tmp = *this;
	++(*this);
	return (tmp);
}

Fixed	Fixed::operator--(void)
{
	this->_nb--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed		tmp;

	tmp = *this;
	--(*this);
	return (tmp);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}
