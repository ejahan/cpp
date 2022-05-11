/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:01:22 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/12 00:39:45 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

void	check_to_replace(std::string line, std::string *file, std::string s1, std::string s2)
{
	int	i;

	i = 0;
	while (i < line.length())
	{
		if (line.compare(i, s1.length(), s1) == 0)
		{
			i += s1.length();
			*file += s2;
		}
		else
		{
			*file += line[i];
			i++;
		}
	}
	*file += '\n';
	return ;
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "wrong number of arguments" << std::endl;
		return (1);
	}
	std::string		filename = av[1];
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::string		line;
	std::string		new_file_content;
	if (s1.empty() || s2.empty())
	{
		std::cout << "ERROR : s1 and s2 should not be empty" << std::endl;
		return (1);
	}
	std::ifstream	ifs(filename);
	if (!ifs)
	{
		std::cout << "ERROR : file doesn't exist" << std::endl;
		return (1);
	}
	std::ofstream	ofs(filename += ".replace");
	while (getline(ifs, line))
		check_to_replace(line, &new_file_content, s1, s2);
	ofs << new_file_content;
	ifs.close();
	ofs.close();
	return (0);
}
