/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:06:56 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/16 21:06:54 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span {

	public:

		Span(void);
		Span (unsigned int N);
		Span(Span const & cpy);
		~Span (void);
		
		void	addNumber(int i);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		void	addRange(std::vector<int>::iterator i, std::vector<int>::iterator i2);

		Span & operator=(Span const & rhs);

		class	EnoughtElements : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("ERROR : there is already enought elements");
				};
		};
		class	NotEnoughtException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("ERROR : there is not enought elements to compare");
				};
		};

	private:
	
		unsigned int	_N;
		std::vector<int>	_tab;

};

#endif
