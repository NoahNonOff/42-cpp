/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:10:30 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/09/11 14:54:43 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

double	stod(std::string const &str) {

	std::string			data = str;
	std::stringstream	ss(data);
	double				ret;
	ss >> ret;
	return ret;
}

std::map<std::string, double>	mapInit(void) {

	std::ifstream	file;
}