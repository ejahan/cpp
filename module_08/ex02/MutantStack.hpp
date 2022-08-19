/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:17:12 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/19 19:13:55 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>
 
template <typename T>
class	MutantStack : public std::stack<T>
{

	public:

		MutantStack(void) {}
		MutantStack(MutantStack<T> & cpy) {*this = cpy;}
		~MutantStack(void) {}

		MutantStack<T> & operator=(MutantStack<T> const & cpy)
		{
			this->c = cpy.c;
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin(void)
		{
			return this->c.begin();
		}
		iterator	end(void)
		{
			return (this->c.end());
		}

};

#endif
