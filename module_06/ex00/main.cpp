/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 21:15:25 by ejahan            #+#    #+#             */
/*   Updated: 2022/08/22 17:47:20 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cstdlib>

int	nan_inf(std::string str)
{
	std::cout << "char : impossible" << std::endl;
	std::cout << "int : impossible" << std::endl;
	if (str == "+inf" || str == "+inff")
	{
		std::cout << "float : +inff" << std::endl;
		std::cout << "double : +inf" << std::endl;
	}
	if (str == "-inf" || str == "-inff")
	{
		std::cout << "float : -inff" << std::endl;
		std::cout << "double : -inf" << std::endl;
	}
	if (str == "nan" || str == "nanf")
	{
		std::cout << "float : nanf" << std::endl;
		std::cout << "double : nan" << std::endl;
	}
	return (0);
}

void	from_char(char c)
{
	std::cout << "char : " << c << std::endl;
	std::cout << "int : " << static_cast<int>(c) << std::endl;
	std::cout << "float : " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(c) << ".0" << std::endl;
}

void	from_int(int i)
{
	if (i < 32)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : " << static_cast<char>(i) << std::endl;
	std::cout << "int : " << i << std::endl;
	std::cout << "float : " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(i) << ".0" << std::endl;
}

unsigned int	is_zero(std::string str)
{
	unsigned int i = str.find('.');

	if (str.size() == i)
		return (0);
	i++;
	while (str[i] == '0')
		i++;
	if (str.size() == i || str[i] == 'f')
		return (0);
	return (1);
}

void	from_float(float f, int i)
{
	if (static_cast<int>(f) < 32)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : " << static_cast<char>(f) << std::endl;
	if (f > 2147483647.0 || f < -2147483648.0)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(f) << std::endl;
	if (i == 0)
	{
		std::cout << "float : " << f << ".0f" << std::endl;
		std::cout << "double : " << static_cast<double>(f) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float : " << f << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(f) << std::endl;
	}
}

void	from_double(double d, int i)
{
	if (static_cast<int>(d) < 32)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : " << static_cast<char>(d) << std::endl;
	if (d > 2147483647.0 || d < -2147483648.0)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(d) << std::endl;
	if (i == 0)
	{
		std::cout << "float : " << static_cast<float>(d) << ".0f" << std::endl;
		std::cout << "double : " << d << ".0" << std::endl;
	}
	else
	{
		std::cout << "float : " << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double : " << d << std::endl;
	}
}

int	is_float(std::string str)
{
	unsigned int	i;

	i = 0;
	while (isdigit(str[i]) != 0)
		i++;
	if (str[i] == '.')
		i++;
	while (isdigit(str[i]) != 0)
		i++;
	if (str[i] == 'f')
		i++;
	else if (i == str.size())
		return (1);
	else
		return (-1);
	if (i == str.size())
		return (0);
	return (-1);
}

int	is_int(std::string str)
{
	unsigned int	i = 0;

	while (isdigit(str[i]) != 0)
		i++;
	if (i == str.size())
		return (0);
	return (-1);
}

int	main(int ac, char **av)
{
	std::string	str;

	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	str = av[1];
	if (str == "+inf" || str == "-inf" || str == "nan" || str == "+inff" || str == "-inff" || str == "nanf")
		return (nan_inf(str));
	else if (str.size() == 1 && isdigit(str[0]) == 0)
		from_char(str[0]);
	else if (is_int(str) == 0)
		from_int(std::atoi(str.c_str()));
	else if (is_float(str) == 0)
		from_float(std::atof(str.c_str()), is_zero(str));
	else if (is_float(str) == 1)
		from_double(std::strtod(str.c_str(), NULL), is_zero(str));
	else
	{
		std::cout << "ERROR" << std::endl;
		return (1);
	}
	
	return (0);
}
