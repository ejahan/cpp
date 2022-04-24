/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 20:54:23 by ejahan            #+#    #+#             */
/*   Updated: 2022/04/25 00:12:28 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <cstring>

void	init_pb(PhoneBook *pb)
{
	pb->nb_of_contact = 0;
	pb->contact[0].exist = 0;
	pb->contact[1].exist = 0;
	pb->contact[2].exist = 0;
	pb->contact[3].exist = 0;
	pb->contact[4].exist = 0;
	pb->contact[5].exist = 0;
	pb->contact[6].exist = 0;
	pb->contact[7].exist = 0;
}

int	check_contact(PhoneBook *pb)
{
	if (pb->contact[pb->nb_of_contact].first_name == ""
		|| pb->contact[pb->nb_of_contact].last_name == ""
		|| pb->contact[pb->nb_of_contact].nickname == ""
		|| pb->contact[pb->nb_of_contact].phone_number == ""
		|| pb->contact[pb->nb_of_contact].darkest_secret == "")
	{
		std::cout << std::endl;
		std::cout << "error : at least one information is missing" << std::endl;
		return (-1);
	}
	return (0);
}

void	phonebook_add(PhoneBook *pb)
{
	int	i;

	i = 0;
	std::cout << std::endl;
	std::cout << "first name : ";
	std::getline(std::cin, pb->contact[pb->nb_of_contact].first_name);
	std::cout << "last name : ";
	std::getline(std::cin, pb->contact[pb->nb_of_contact].last_name);
	std::cout << "nickname : ";
	std::getline(std::cin, pb->contact[pb->nb_of_contact].nickname);
	std::cout << "phone number : ";
	std::getline(std::cin, pb->contact[pb->nb_of_contact].phone_number);
	std::cout << "darkest secret : ";
	std::getline(std::cin, pb->contact[pb->nb_of_contact].darkest_secret);
	if (pb->nb_of_contact < 7 && check_contact(pb) != -1)
	{
		pb->contact[pb->nb_of_contact].exist = 1;
		pb->nb_of_contact = pb->nb_of_contact + 1;
	}
}

void	print_contact(Contact contact)
{
	std::cout << "first_name : "<< contact.first_name << std::endl;
	std::cout << "last name : "<< contact.last_name << std::endl;
	std::cout << "nickname : "<< contact.nickname << std::endl;
	std::cout << "phone number : "<< contact.phone_number << std::endl;
	std::cout << "darkest secret : "<< contact.darkest_secret << std::endl;
}

void	search_index(PhoneBook *phonebook)
{
	std::string	index;

	std::cout << std::endl << "index : ";
	std::getline(std::cin, index);
	if (index == "1" && phonebook->contact[0].exist == 1)
		print_contact(phonebook->contact[0]);
	else if (index == "2" && phonebook->contact[1].exist == 1)
		print_contact(phonebook->contact[1]);
	else if (index == "3" && phonebook->contact[2].exist == 1)
		print_contact(phonebook->contact[2]);
	else if (index == "4" && phonebook->contact[3].exist == 1)
		print_contact(phonebook->contact[3]);
	else if (index == "5" && phonebook->contact[4].exist == 1)
		print_contact(phonebook->contact[4]);
	else if (index == "6" && phonebook->contact[5].exist == 1)
		print_contact(phonebook->contact[5]);
	else if (index == "7" && phonebook->contact[6].exist == 1)
		print_contact(phonebook->contact[6]);
	else if (index == "8" && phonebook->contact[7].exist == 1)
		print_contact(phonebook->contact[7]);
	else
		std::cout << "You gave a wrong index" << std::endl;
}

void	phonebook_search(PhoneBook *phonebook)
{
	int	i;

	i = 0;
	std::cout << std::endl;
	if (phonebook->contact[0].exist == 0)
	{
		std::cout << "no contact yet (type 'ADD' to create one)" << std::endl;
		return ;
	}
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	std::cout << "===========================================" << std::endl;
	while (phonebook->contact[i].exist == 1)
	{
		std::cout << "         " << i + 1 << "|";
		std::cout << "      test|      test|      test" << std::endl;
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
	init_pb(&pb);
	while (1)
	{
		std::cout << std::endl << "-> ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			phonebook_add(&pb);
		else if (cmd == "SEARCH")
			phonebook_search(&pb);
		else if (cmd == "EXIT")
			return (0);
		else
			std::cout << "ERROR : not a valid command" << std::endl;
	}
	return (0);
}
