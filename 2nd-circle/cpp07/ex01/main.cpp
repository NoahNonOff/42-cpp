/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:15:05 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/31 17:18:58 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	voyelUp(char &c) {
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
		c -= 32;
}

int	main(void)
{
	int 	res;
	int		size = 20;
	char	tab[size];

	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		res = std::rand() % 26;
		tab[i] = 'a' + res;
	}

	std::cout << "voyelUp() used\n";
	std::cout << "------------------------------" << std::endl;

	for (int i = 0; i < size; i++) {
		std::cout << ((i < 9)?" ":"") << i + 1 << ": " << tab[i];
		if (i == 0 || ((i + 1)% 5 != 0))
			std::cout << " ";
		else
			std::cout << std::endl;
	}

	iter(tab, size, &voyelUp);
	std::cout << "------------------------------" << std::endl;

	for (int i = 0; i < size; i++) {
		std::cout << ((i < 9)?" ":"") << i + 1 << ": " << tab[i];
		if (i == 0 || ((i + 1)% 5 != 0))
			std::cout << " ";
		else
			std::cout << std::endl;
	}

	return 0;
}