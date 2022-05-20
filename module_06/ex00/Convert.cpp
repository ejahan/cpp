/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:53:51 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/20 19:37:18 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void) : _str("error")
{
    // std::cout << "Convert default constructor called" << std::endl;
    return ;
}

Convert::Convert(std::string str) : _str(str)
{
	return ;
}

Convert::Convert(Convert const &cpy)
{
	// std::cout << "Convert Copy constructor called"<< std::endl;
	*this = cpy;
	return ;
}

Convert::~Convert(void)
{
	// std::cout << "Convert destructor called "<< std::endl;
	return ;
}

/*
**	===========================================================================
**	OPERATORS
**	===========================================================================
*/

Convert &Convert::operator=(Convert const &rhs)
{
	this->_str = rhs._str;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Convert const &convert)
{
	try
	{
		o << "char: " << convert.PrintChar() << std::endl;
	}
	catch (Convert::ImpossibleException e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Convert::NoDisplayableException e)
	{
		std::cout << e.what() << std::endl;
	}
	// try
	// {
	// 	o << "int: " << convert.PrintInt() << std::endl;
	// }
	// catch (Convert::ImpossibleException e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	o << "float: " << convert.PrintFloat() << std::endl;
	// }
	// catch (Convert::ImpossibleException e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	o << "double: " << convert.PrintDouble() << std::endl;
	// }
	// catch (Convert::ImpossibleException e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	return (o);
}

/*
**	===========================================================================
**	MEMBER FUNCTION
**	===========================================================================
*/

std::string	Convert::Get_str(void) const
{
	return (this->_str);
}

char	Convert::PrintChar(void) const
{
	char	c;

	if (this->_str.length() > 1)
		throw ImpossibleException();
	// if (this->_str[0] == ' ')
	// 	throw NoDisplayableException();
	c = this->_str[0];
	// c = static_cast<char>(this->_str);
	return (c);
}

// int		Convert::PrintInt(void)
// {
// 	int	nb;

// 	if ()
// 		throw ImpossibleException();
// 	return (nb);
// }

// float	Convert::PrintFloat(void)
// {
// 	float	nb;

// 	if ()
// 		throw ImpossibleException();
// 	return (nb);
// }

// double	Convert::PrintDouble(void)
// {
// 	double	nb;

// 	if ()
// 		throw ImpossibleException();
// 	return (nb);
// }
