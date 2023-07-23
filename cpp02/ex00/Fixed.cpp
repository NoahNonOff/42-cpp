/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:56:55 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/23 12:08:37 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fix::Fix(void) {
	this->_num = 0;
	this->_nBits = 8;
	std::cout << "Default constructor called" << std::endl;
}

Fix::~Fix(void) {
	std::cout << "Destructor called" << std::endl;
}

Fix::Fix(Fix &t) {
	std::cout << "Copy constructor called" << std::endl;
	this->_num = t._num;
}
