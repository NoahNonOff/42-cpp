/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 06:32:07 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/29 13:58:13 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char *av[])
{
	ScalarConverter	literal;

	if (ac != 2) {
		std::cerr << "launch error: ./ScalarConverter <literal>\n";
		return 2;
	}

	try {
		literal.setStr(av[1]);
		literal.convert();

		std::cout << literal;
	}
	catch (const ScalarConverter::ConvertException &error){
		std::cerr << "error: " << error.what() << std::endl;
		return 1;
	}
	return 0;
}