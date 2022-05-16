/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 20:54:23 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/16 03:34:26 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_nb_of_contact = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

int	PhoneBook::Get_nb_of_contact(void)
{
	return (this->_nb_of_contact);
}

void	PhoneBook::incr_nb(void)
{
	this->_nb_of_contact++;
	return ;
}

int	check_contact(PhoneBook *pb)
{
	if (pb->contact[pb->Get_nb_of_contact()].GetFirstName() == ""
		|| pb->contact[pb->Get_nb_of_contact()].GetLastName() == ""
		|| pb->contact[pb->Get_nb_of_contact()].GetNickName() == ""
		|| pb->contact[pb->Get_nb_of_contact()].GetPhoneNumber() == ""
		|| pb->contact[pb->Get_nb_of_contact()].GetDarkestSecret() == "")
	{
		std::cout << std::endl;
		std::cout << "ERROR : at least one information is missing" << std::endl;
		return (-1);
	}
	return (0);
}

void	print_contact(Contact contact)
{
	std::cout << "first_name : "<< contact.GetFirstName() << std::endl;
	std::cout << "last name : "<< contact.GetLastName() << std::endl;
	std::cout << "nickname : "<< contact.GetNickName() << std::endl;
	std::cout << "phone number : "<< contact.GetPhoneNumber() << std::endl;
	std::cout << "darkest secret : "<< contact.GetDarkestSecret() << std::endl;
}

void	search_index(PhoneBook *phonebook)
{
	std::string	index;

	std::cout << std::endl << "index : ";
	std::getline(std::cin, index);
	std::cout << std::endl;
	if (index == "1" && phonebook->contact[0].GetExist() == 1)
		print_contact(phonebook->contact[0]);
	else if (index == "2" && phonebook->contact[1].GetExist() == 1)
		print_contact(phonebook->contact[1]);
	else if (index == "3" && phonebook->contact[2].GetExist() == 1)
		print_contact(phonebook->contact[2]);
	else if (index == "4" && phonebook->contact[3].GetExist() == 1)
		print_contact(phonebook->contact[3]);
	else if (index == "5" && phonebook->contact[4].GetExist() == 1)
		print_contact(phonebook->contact[4]);
	else if (index == "6" && phonebook->contact[5].GetExist() == 1)
		print_contact(phonebook->contact[5]);
	else if (index == "7" && phonebook->contact[6].GetExist() == 1)
		print_contact(phonebook->contact[6]);
	else if (index == "8" && phonebook->contact[7].GetExist() == 1)
		print_contact(phonebook->contact[7]);
	else
		std::cout << "ERROR : You gave a wrong index" << std::endl;
}

void	print_index_contact(std::string str, int i)
{
	int	j;

	j = 0;
	if (str.length() > 10)
	{
		while (j < 9)
		{
			std::cout << str[j];
			j++;
		}
		std::cout << ".";
	}
	else if (str.length() == 10)
		std::cout << str;
	else
	{
		j = 10 - str.length();
		while (j > 0)
		{
			std::cout << " ";
			j--;
		}
		std::cout << str;
	}
}

void	phonebook_search(PhoneBook *phonebook)
{
	int	i;

	i = 0;
	std::cout << std::endl;
	if (phonebook->contact[0].GetExist() == 0)
	{
		std::cout << "no contact yet (type 'ADD' to create one)" << std::endl;
		return ;
	}
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	std::cout << "===========================================" << std::endl;
	while (phonebook->contact[i].GetExist() == 1)
	{
		std::cout << "         " << i + 1 << "|";
		print_index_contact(phonebook->contact[i].GetFirstName(), i);
		std::cout << "|";
		print_index_contact(phonebook->contact[i].GetLastName(), i);
		std::cout << "|";
		print_index_contact(phonebook->contact[i].GetNickName(), i);
		std::cout << std::endl;
		i++;
	}
	search_index(phonebook);
}

int	main(int ac, char **av)
{
	PhoneBook	pb;
	std::string	cmd;

	std::cout << std::endl << "		================================";
	std::cout << std::endl << "		>>>>> MY AWESOME PHONEBOOK <<<<<";
	std::cout << std::endl << "		================================";
	std::cout << std::endl << std::endl;
	std::cout << "**AVAILABLE COMMANDS : ADD, SEARCH, EXIT**";
	std::cout << std::endl << std::endl;
	while (1)
	{
		std::cout << std::endl << "-> ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			pb.contact[pb.Get_nb_of_contact()].AddContact();
			if (pb.Get_nb_of_contact() < 7 && check_contact(&pb) != -1)
			{
				pb.contact[pb.Get_nb_of_contact()].ChangeExist();
				pb.incr_nb();
			}
		}
		else if (cmd == "SEARCH")
			phonebook_search(&pb);
		else if (cmd == "EXIT")
			return (0);
		else
			std::cout << "ERROR : not a valid command" << std::endl;
	}
	return (0);
}
