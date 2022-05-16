/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 23:03:26 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/16 03:32:44 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{
	this->_exist = 0;
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string	Contact::GetFirstName(void)
{
	return (this->_first_name);
}

std::string	Contact::GetLastName(void)
{
	return (this->_last_name);
}

std::string	Contact::GetNickName(void)
{
	return (this->_nickname);
}

std::string	Contact::GetPhoneNumber(void)
{
	return (this->_phone_number);
}

std::string	Contact::GetDarkestSecret(void)
{
	return (this->_darkest_secret);
}

int	Contact::GetExist(void)
{
	return (this->_exist);
}

void	Contact::ChangeExist(void)
{
	this->_exist = 1;
	return ;
}

void	Contact::AddContact(void)
{
	int	i;

	i = 0;
	std::cout << std::endl;
	std::cout << "first name : ";
	std::getline(std::cin, this->_first_name);
	std::cout << "last name : ";
	std::getline(std::cin, this->_last_name);
	std::cout << "nickname : ";
	std::getline(std::cin, this->_nickname);
	std::cout << "phone number : ";
	std::getline(std::cin, this->_phone_number);
	std::cout << "darkest secret : ";
	std::getline(std::cin, this->_darkest_secret);
}
