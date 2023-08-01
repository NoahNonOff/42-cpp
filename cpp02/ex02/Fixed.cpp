/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:56:55 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/01 12:37:45 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

// constructor default
Fixed::Fixed(void) : _num(0) {
	if (this->_verbose)
		std::cout << "Default constructor called" << std::endl;
}

// constructor int
Fixed::Fixed(const int n) : _num(n << _nBits) {
	if (this->_verbose)
		std::cout << "Int constructor called" << std::endl;
}

// constructor float
Fixed::Fixed(const float n) : _num(roundf(n * ft_pow(2, this->_nBits))) {
	if (this->_verbose)
		std::cout << "Float constructor called" << std::endl;
}

//destructor
Fixed::~Fixed(void) {
	if (this->_verbose)
		std::cout << "Destructor called" << std::endl;
}

// copy constructor
Fixed::Fixed(const Fixed &t) {
	if (this->_verbose)
		std::cout << "Copy constructor called" << std::endl;
	*this = t;
}

// Get && Set:
int		Fixed::getRawBits(void) const { return this->_num; }
void	Fixed::setRawBits(int const raw) { this->_num = raw; }

// toFloat
float	Fixed::toFloat(void) const {
	return (float)this->_num / ft_pow(2, this->_nBits);
}

// toInt
int	Fixed::toInt(void) const {
	return this->_num >> this->_nBits; // binary operator
}

/* ================ utils ================ */

int	ft_pow(int n, int pow) {
	int	res = 1;

	for (int i = 0; i < pow; i++)
		res *= n;
	return res;
}