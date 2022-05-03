/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:01:22 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/03 06:41:17 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace_file.hpp"
#include <fstream>

int	main(int ac, char **av)
{
	std::string	file;

	if (ac != 4)
	{
		std::cout << "wrong number of arguments" << std::endl;
		return (-1);
	}
	std::string _filename = av[1];
	std::string _s1 = av[2];
	std::string _s2 = av[3];
	std::ifstream	ifs(_filename);
	ifs >> file;
	ifs.close();
	_filename += ".replace";
	std::ofstream	ofs(_filename);
	ofs << file << std::endl;
	ofs.close();	
	return (0);
}
