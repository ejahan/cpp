/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 21:19:21 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/16 03:34:53 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <cstring>

class	Contact
{
	private:

		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
		int			_exist;

	public:

		Contact(void);
		~Contact(void);

		std::string	GetFirstName(void);
		std::string	GetLastName(void);
		std::string	GetNickName(void);
		std::string	GetPhoneNumber(void);
		std::string	GetDarkestSecret(void);
		int			GetExist(void);
		void		ChangeExist(void);

		void		AddContact();

};

#endif
