/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 21:15:25 by ejahan            #+#    #+#             */
/*   Updated: 2022/05/19 05:14:31 by ejahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// // demotion > regagner en precision
// // promotion > perdre en precision


// const -> plus precis



// 	/*static cast*/ truc = static_cast<type>(src)
// pour les valeurs simples
// pas ouf pour class sauf si diff arbres heritages 

// 	/*dynamic cast*/ truc = dynamic_cast<type>(src)
// -> pendant l execution donc peut echouer
// fonctionne que dans le cas de polymorphisme (une fonction membre est virtual)
// si erreur -> return NULL

// 	/*reinterpret cast*/ truc = reinterpret_cast<type>(src) 
// cast le plus permissif
// si faux -> peut crash
// souvent pour retypage (char * -> void * -> char *)

// 	/*const cast*/ truc = const_cast<type>(src)
// capable transformation qualifieur de type
// -> pas ouf

// 	/*cast operator*/
// definir dans les class des operateurs specifiques pour faire des conversions \
// implicites de notre class vers un type

// operator type()
// {
// 	blablabla
// }
// /*ex:
// class a;
// int b = a;
// */

// 	/*explicite*/
// interdit la construction implicite d une class 


























int	main(int ac, char **av)
{
	std::string	str;

	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	str = av[1];
	Convert	convert();

	return (0);
}
















