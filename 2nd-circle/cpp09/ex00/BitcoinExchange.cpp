/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:10:30 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/09/14 12:06:18 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/* ====================== utils ====================== */
double	stod(std::string const &str) {

	std::string			data = str;
	std::stringstream	ss(data);
	double				ret;
	ss >> ret;
	return ret;
}

std::map<std::string, double>	create_map(std::string const &fileName, std::string const &sep) {

	std::size_t						pos;
	std::string						line;
	std::ifstream					file(fileName.c_str());
	std::map<std::string, double>	ret;

	while (std::getline(file, line)) {
		pos = line.find(sep);
		ret.insert(std::pair<std::string, double>(line.substr(0, pos), stod(line.substr(pos + sep.size()))));
	}
	return ret;
}

bool	isDouble(std::string const &str) {
	int	comma = 0;
	int		i = 0;

	if (str.find('.') == std::string::npos || str.find('.') == 0
		|| str.find('.') == str.length() - 1)
		return false;
	if (str[i] == '-' || str[i] == '+')
		i++;
	for (; i < (int)str.length(); i++) {
		if (str[i] == '.')
			comma++;
		if ((!std::isdigit(str[i]) && str[i] != '.') || comma > 1)
			return false;
	}
	return true;
}

bool	isOverflow(std::string const &str) {
	if (std::string::npos != str.find("."))
		return false;
	double	num = stod(str);
	std::stringstream	stream;

	stream << num;
	std::string	converted;
	stream >> converted;
	return str.compare(converted);
}

/* ====================== class ====================== */

std::map<std::string, double>	BitExchange::getData(void) const { return this->_data; }

BitExchange::BitExchange() {
	_data = create_map("data.csv", ",");
}

BitExchange::~BitExchange() {}

BitExchange::BitExchange(BitExchange const &other) { *this = other; }

BitExchange	&BitExchange::operator=(BitExchange const &other) {
	if (this != &other) {
		this->_data = other.getData();
	}
	return *this;
}

double	BitExchange::findExchange(std::string const &date, double value) {

	double	ret = _data[date];
	if (ret)
		return ret * value;
	std::map<std::string, double>::iterator	it;

	it = _data.upper_bound(date);
	return it->second * value;
}

/* ====================== funct ====================== */
void	bitExchange(std::string const &fileName) {

	std::size_t						pos;
	std::string						line;
	std::ifstream					file(fileName.c_str());
	BitExchange	converter;

	// std::map<std::string, double>			test = converter.getData();
	// std::map<std::string, double>::iterator	it = test.begin();

	// while (it != test.end()) {

	// 	std::cout << "\"" << it->first << "\"" << ", \"" << it->second << "\"" << std::endl;
	// 	it++;
	// }

	try {
		std::getline(file, line);
		while (std::getline(file, line)) {

			pos = line.find(" | ");
			std::string	date = line.substr(0, pos);
			std::string	s_value = line.substr(pos + 3);
			if (pos == std::string::npos || !date.size() || !s_value.size()) {
				std::cout << "Error: bad input => " << line << std::endl;
				continue ;
			}
			else if (isOverflow(s_value)) {
				std:: cout << "Error: too large a number." << std::endl;
				continue ;
			}
			double	value = stod(s_value);
			if (value < 0) {
				std:: cout << "Error: not a positive number." << std::endl;
				continue ;
			}
			std::cout << date << " => " << value << " = " << converter.findExchange(date, value) << std::endl;
		}
	}
	catch (std::exception &e) {}
}
