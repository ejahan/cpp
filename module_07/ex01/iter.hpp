/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:48:11 by elisa             #+#    #+#             */
/*   Updated: 2022/07/16 12:59:46 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void    print(T & nul)
{
    std::cout << nul << std::endl;
};

template <typename T>
void  iter(T * tab, unsigned int size, void f(T & t))
{
    int i = 0;

    while (i < size)
    {
        f(tab[i]);
        i++;
    }
};

#endif
