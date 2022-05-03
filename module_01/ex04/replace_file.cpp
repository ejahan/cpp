/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_file.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 06:07:27 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/03 06:18:26 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace_file.hpp"

replace_file::replace_file(std::string filename, std::string s1, std::string s2) : 
		_filename(filename), 
		_s1(s1),
		_s2(s2)
{
	std::cout << "filename : " << this->_filename << std::endl;
	std::cout << "s1 : " << this->_s1 << std::endl;
	std::cout << "s2 : " << this->_s2 << std::endl;
	return ;
}

replace_file::~replace_file()
{
	return ;
}
