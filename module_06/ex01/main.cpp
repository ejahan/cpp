/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:22:16 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/22 02:42:14 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

typedef struct		s_Data 
{
	char	c;
	int		i;
}					Data;

uintptr_t	serialize(Data *ptr)
{
	uintptr_t	raw;

	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

Data	*deserialize(uintptr_t raw)
{
	Data	*ptr;

	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}

int	main()
{
	Data	data;
	Data	*test;
	uintptr_t	ptr;

	data.c = 'c';
	data.i = 3;
	std::cout << "data.c : " << data.c << std::endl;
	std::cout << "data.i : " << data.i << std::endl << std::endl;
	ptr = serialize(&data);
	std::cout << ptr << std::endl <<std::endl;
	test = deserialize(ptr);
	std::cout << "test->c : " << test->c << std::endl;
	std::cout << "test->i : " << test->i << std::endl;
	test->c = 'j';
	test->i = 456;
	std::cout << std::endl << "**change test->c** and test->i" << std::endl << std::endl;
	std::cout << "test->c : " << test->c << std::endl;
	std::cout << "test->i : " << test->i << std::endl;

	return (0);
}
