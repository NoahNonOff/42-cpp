/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:52:09 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/09/15 09:36:52 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

int	main(int ac, char *av[]) {

	if (ac != 2 || !checkArg(av[1])) {
		std::cerr << "./RPN \"4 9 + 8 - 7 5 * * 6 - 1 +\"" << std::endl;
		return 1;
	}

	try {
		std::cout << calculate(av[1]) << std::endl;
	}
	catch (std::exception &error) {
		std::cerr << "error: " << error.what() << std::endl;
	}

	return 0;
}