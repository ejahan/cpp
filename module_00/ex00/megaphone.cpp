/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:01:10 by ejahan            #+#    #+#             */
/*   Updated: 2022/04/16 20:39:43 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < ac)
		{
			j = 0;
			while (j < (int)strlen(av[i]))
			{
				std::cout << (char)toupper(av[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
