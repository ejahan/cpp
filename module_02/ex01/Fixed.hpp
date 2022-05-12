/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 01:31:43 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/12 03:55:29 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int	_nb;
		const int static	_nb_bits = 8;

	public:
		Fixed(void);
		Fixed(int nb);
		Fixed(float nb);
		Fixed(Fixed const &rhs);
		~Fixed(void);
		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed	&operator=(Fixed const &rhs);

};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

#endif

// • Un constructeur prenant un entier constant en paramètre et qui convertit celuici
// en virgule fixe. Le nombre de bits de la partie fractionnaire est initialisé à 8
// comme dans l exercice 00.

// • Un constructeur prenant un flottant constant en paramètre et qui convertit
// celui-ci en virgule fixe. Le nombre de bits de la partie fractionnaire est 
// initialisé à 8 comme dans l exercice 00.

// • Une fonction membre float toFloat( void ) const;
// qui convertit la valeur en virgule fixe en nombre à virgule flottante.

// • Une fonction membre int toInt( void ) const;
// qui convertit la valeur en virgule fixe en nombre entier.




// Ajoutez également la fonction suivante à vos fichiers de la classe Fixed :

// • Une surcharge de l’opérateur d’insertion («) qui insère une représentation en 
// virgule flottante du nombre à virgule fixe dans le flux de sortie (objet output 
// stream) passé en paramètre.