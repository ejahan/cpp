/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 21:19:03 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/16 03:33:15 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class	PhoneBook
{
	private:

		int		_nb_of_contact;

	public:

		PhoneBook(void);
		~PhoneBook(void);

		Contact	contact[8];

		int		Get_nb_of_contact(void);
		void	incr_nb(void);
};

#endif
