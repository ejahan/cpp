/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:20:02 by elisa             #+#    #+#             */
/*   Updated: 2022/08/18 15:45:41 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main()
{
    std::string i = "cdqsd";
    std::string j = "zesrdtfyguyhu";

    std::cout << i << std::endl << j << std::endl << std::endl;

	std::cout << "MIN : " << ::min(i, j) << std::endl;
	std::cout << "MAX : " << ::max(i, j) << std::endl;
}
