/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:53:51 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/20 01:11:27 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

// Convert::Convert(void) : _str("error")
// {
// 	// std::cout << "Convert default constructor called" << std::endl;
// 	return ;
// }

// Convert::Convert(std::string str, double nb) : _str(str), _nb_d(nb)
// {
// 	return ;
// }

// Convert::Convert(Convert const &cpy)
// {
// 	// std::cout << "Convert Copy constructor called"<< std::endl;
// 	*this = cpy;
// 	return ;
// }

// Convert::~Convert(void)
// {
// 	// std::cout << "Convert destructor called "<< std::endl;
// 	return ;
// }

// /*
// **	===========================================================================
// **	OPERATORS
// **	===========================================================================
// */

// Convert &Convert::operator=(Convert const &rhs)
// {
// 	this->_str = rhs._str;
// 	return *this;
// }

// std::ostream	&operator<<(std::ostream &o, Convert const &convert)
// {
// 	try
// 	{
// 		o << "char: " << convert.PrintChar() << std::endl;
// 	}
// 	catch (Convert::ImpossibleException e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	catch (Convert::NoDisplayableException e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	try
// 	{
// 		o << "int: " << convert.PrintInt() << std::endl;
// 	}
// 	catch (Convert::ImpossibleException e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	try
// 	{
// 		o << "float: " << convert.PrintFloat() << "f" << std::endl;
// 	}
// 	catch (Convert::ImpossibleException e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	try
// 	{
// 		o << "double: " << convert.PrintDouble() << std::endl;
// 	}
// 	catch (Convert::ImpossibleException e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	return (o);
// }

// /*
// **	===========================================================================
// **	MEMBER FUNCTION
// **	===========================================================================
// */

// std::string	Convert::Get_str(void) const
// {
// 	return (this->_str);
// }

// char	Convert::PrintChar(void) const
// {
// 	char	c;

// 	// if (this->_str.length() > 1)
// 	// 	throw ImpossibleException();
// 	if ()
// 	c = static_cast<char>(this->_nb_d);
// 	if (!isprint(c))
// 		throw NoDisplayableException();
// 	return (c);
// }

// int		Convert::PrintInt(void) const
// {
// 	int	nb;

// 	// if ()
// 	// 	throw ImpossibleException();
// 	nb = static_cast<int>(this->_nb_d);
// 	return (nb);
// }

// float	Convert::PrintFloat(void) const
// {
// 	float	nb;

// 	nb = static_cast<float>(this->_nb_d);
// 	return (nb);
// }

// double	Convert::PrintDouble(void) const
// {
// 	// double	nb;

// 	// if ()
// 	// 	throw ImpossibleException();
// 	return (this->_nb_d);
// }
