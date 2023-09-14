/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:28:09 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/09/14 16:19:11 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char *av[]) {

	if (ac <= 1 || !checkArgs(av)) {
		std::cerr << "./PmergeMe 3 5 9 7 4" << std::endl;
		return 1;
	}

	PmergeMe	_merge(ac, av);
	_merge.sort();
	return 0;
}