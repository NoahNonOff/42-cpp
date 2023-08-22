/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:28:26 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/22 20:31:14 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int	main(int ac, char **av)
{
	Harl		csc;
	std::string	input;

	if (ac == 2) {
		input = av[1];
		csc.complain(input);
		return 0;
	}
	std::cerr << "./HarlFilter < level >" << std::endl;
	return 1;
}
