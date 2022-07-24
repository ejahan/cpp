/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:28:57 by elisa             #+#    #+#             */
/*   Updated: 2022/07/16 12:40:48 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
T const &  min(T const & uno, T const & dos)
{
    return uno < dos ? uno:dos;
};

template <typename T>
T const &  max(T const & uno, T const & dos)
{
    return uno > dos ? uno:dos;
};

template <typename T>
void  swap(T & uno, T & dos)
{
    T tmp;
    tmp = uno;
    uno = dos;
    dos = tmp;
};

#endif
