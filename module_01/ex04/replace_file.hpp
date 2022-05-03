/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_file.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 06:05:44 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/03 06:18:43 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_FILE_HPP
# define REPLACE_FILE_HPP

#include <iostream>

class	replace_file
{
	private:
		std::string _filename;
		std::string _s1;
		std::string _s2;

	public:
		replace_file(std::string filename, std::string s1, std::string s2);
		~replace_file();
};

#endif
