/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:10:19 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/09/14 11:23:31 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

inline bool	exist(std::string const &name) {
	std::ifstream	f(name.c_str());
	return f.good();
}

int	main(int ac, char *av[]) {

	if (ac != 2) {

		std::cerr << "error: ./btc <database.csv>" << std::endl;
		std::cerr << "-> database.csv: prices/dates to evaluate" << std::endl;
		return 1;
	}
	if (!exist("data.csv")) {

		std::cerr << "error: file issue: \"data.csv\"" << std::endl;
		return 2;
	}
	if (!exist(av[1])) {

		std::cerr << "error: file issue: \"" << av[1] << "\"" << std::endl;
		return 2;
	}
	bitExchange(av[1]); 
	return 0;
}