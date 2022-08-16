/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:06:43 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/16 21:12:15 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _N(0)
{
	return ;
}

Span::Span(unsigned int N) : _N(N)
{
	return ;
}

Span::Span(Span const &cpy)
{
	*this = cpy;
	return ;
}

Span::~Span(void)
{
	return ;
}

void	Span::addNumber(int i)
{
	if (this->_tab.size() >= this->_N)
	{
		throw EnoughtElements();
		return ;
	}
	this->_tab.push_back(i);
}

Span	&Span::operator=(Span const &cpy)
{
	this->_N = cpy._N;
	this->_tab = cpy._tab;
	return (*this);
}

unsigned int	Span::longestSpan()
{
	std::vector<int>	tmp;

	if (this->_tab.size() == 0 || this->_tab.size() == 1)
		throw NotEnoughtException();

	tmp = this->_tab;
	std::sort(tmp.begin(), tmp.end());

	return (*(tmp.end() - 1) - *tmp.begin());
}

unsigned int	Span::shortestSpan()
{
	std::vector<int>::iterator	i;
	std::vector<int>::iterator	j;
	std::vector<int>			tmp;
	int							k;

	if (this->_tab.size() == 0 || this->_tab.size() == 1)
		throw NotEnoughtException();

	tmp = this->_tab;
	std::sort(tmp.begin(), tmp.end());
	i = tmp.begin();
	j = i + 1;
	k = *j - *i;
	while (j != (tmp.end() - 1))
	{
		if (*j - *i < k)
			k = *j - *i;
		j++;
		i++;
	}
	return (k);
}

void	Span::addRange(std::vector<int>::iterator i, std::vector<int>::iterator i2)
{
	while (i != i2)
	{
		addNumber(*i);
		i++;
	}
}
