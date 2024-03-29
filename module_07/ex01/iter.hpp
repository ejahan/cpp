/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:48:11 by elisa             #+#    #+#             */
/*   Updated: 2022/08/22 23:22:25 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void    print_str(T const & str)
{
    std::cout << str << " -> ca marche" << std::endl;
};

template <typename T>
void  iter(T * tab, unsigned int size, void f(T const & t))
{
    unsigned int i = 0;

    while (i < size)
    {
        f(tab[i]);
        i++;
    }
};

#endif
