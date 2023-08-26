/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:50:08 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/26 17:16:01 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/* ------------------------------ get & set ------------------------------ */
std::string	ScalarConverter::getLiteral(void) const { return _literal; }

/* ------------------------------ canonique ------------------------------ */

ScalarConverter::ScalarConverter() { this->_literal = "0"; }

ScalarConverter::ScalarConverter(const std::string literal) { this->_literal = literal; }

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &src) { *this = src; }

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &src) {
	if (this != &src) {
		this->_literal = src._literal;
	}
	return *this;
}

/* ------------------------------ functions ------------------------------ */

// Insert formatted output
std::ostream &operator<<(std::ostream &o, ScalarConverter const &i) {
	return o << i.getLiteral() << std::endl;
}