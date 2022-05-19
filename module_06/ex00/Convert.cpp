/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:53:51 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/19 05:23:24 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void) : _str("error")
{
    std::cout << "Convert default constructor called" << std::endl;
    return ;
}

Convert::Convert(std::string str) : _str(str)
{
	return ;
}

Convert::Convert(Convert & cpy)
{
    std::cout << "Convert Copy constructor called"<< std::endl;
    *this = cpy;
    return ;
}

Convert & Convert::operator=(Convert const & rhs)
{
    return *this;
}

Convert::~Convert(void)
{
    std::cout << "Convert destructor called "<< std::endl;
    return ;
}

std::string	Convert::Get_str(void)
{
	return (this->_str);
}
