/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:06:39 by elisa             #+#    #+#             */
/*   Updated: 2022/08/22 23:43:39 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class	Array
{
	private:

		T	*_array;
		unsigned int	_size;
	
	public:

		Array(void)
		{
			this->_array = new T[0];
			this->_size = 0;
		}
		Array(unsigned int n)
		{
			this->_array = new T[n];
			this->_size = n;
		}
		Array(Array const &rhs)
		{
			int	i = rhs.size();

			this->_array = new T[rhs._size];
			this->_size = rhs.size();
			i--;
			while (i >= 0)
			{
				this->_array[i] = rhs._array[i];
				i--;
			}
		}
		~Array(void)
		{
			delete [] this->_array;
		}

		class	WrongIndexException	: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("ERROR : wrong index");
				};
		};

		Array	&operator=(Array const &rhs)
		{
			int	i = rhs.size();

			delete [] this->_array;
			this->_array = new T[rhs._size];
			this->_size = rhs.size();
			while (i > 0)
			{
				this->_array[i - 1] = rhs._array[i - 1];
				i--;
			}
			return (*this);
		}

		T	&operator[](unsigned int i)
		{
			if (this->_size == 0 || i > (this->_size - 1))
				throw WrongIndexException();
			return (this->_array[i]);
		}

		unsigned int	size(void) const
		{
			return (this->_size);
		}

};

#endif
