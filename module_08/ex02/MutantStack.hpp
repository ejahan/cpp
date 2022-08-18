/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:17:12 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/18 14:11:01 by ejahan           ###   ########.fr       */
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
			return std::begin(this->c);
		}
		iterator	end(void)
		{
			return std::end(this->c);
		}

};

#endif

/*
	typedef typename ft::stack<T>::container_type::iterator iterator;

	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
*/
