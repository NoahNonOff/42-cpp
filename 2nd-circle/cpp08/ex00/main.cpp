/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:32:48 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/09/01 14:01:23 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#define SIZE 10

int	main(void)
{
	std::cout << "Test with vector" << std::endl;
	std::vector<int>	tab;

	for (unsigned i = 0; i < SIZE; i++)
		tab.push_back(i * 3);

	for (unsigned i = 0; i < SIZE; i++)
		std::cout << tab[i] << ((i == SIZE - 1)?"\n":" ");

	std::cout << "easyfind<std::vector>(tab, 12): " << easyfind(tab, 12) << ")" \
	<< std::endl;

	std::cout << "easyfind<std::vector>(tab, 2): " << easyfind(tab, 2) << ")" \
	<< std::endl;

	return 0;
}