/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_operator.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:36:29 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/02 10:46:54 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// assignement operator
Fixed	&Fixed::operator=(const Fixed& t) {
	if (this->_verbose)
		std::cout << "[Fixed] Copy assignement operator called" << std::endl;
	if (this != &t) {
		this->_num = t.getRawBits();
	}
	return *this;
}

// Insert formatted output
std::ostream &operator<<(std::ostream &o, Fixed const &i) {
	return o << i.toFloat();
}

/* ---------------------- opérateurs de comparaisons --------------------- */
bool	Fixed::operator>(const Fixed &t) const {
	if (this->_verbose)
		std::cout << "[Fixed] > operator called" << std::endl;
	return (this->getRawBits() > t.getRawBits());
}

bool	Fixed::operator<(const Fixed &t) const {
	if (this->_verbose)
		std::cout << "[Fixed] < operator called" << std::endl;
	return (this->getRawBits() < t.getRawBits());
}

bool	Fixed::operator>=(const Fixed &t) const {
	if (this->_verbose)
		std::cout << "[Fixed] >= operator called" << std::endl;
	return (this->getRawBits() >= t.getRawBits());
}

bool	Fixed::operator<=(const Fixed &t) const {
	if (this->_verbose)
		std::cout << "[Fixed] <= operator called" << std::endl;
	return (this->getRawBits() <= t.getRawBits());
}

bool	Fixed::operator==(const Fixed &t) const {
	if (this->_verbose)
		std::cout << "[Fixed] == operator called" << std::endl;
	return (this->getRawBits() == t.getRawBits());
}

bool	Fixed::operator!=(const Fixed &t) const {
	if (this->_verbose)
		std::cout << "[Fixed] != operator called" << std::endl;
	return (this->getRawBits() != t.getRawBits());
}

/* --------------------- opérateurs de arithmétiques --------------------- */
Fixed   Fixed::operator+(const Fixed &t) const {
	if (this->_verbose)
		std::cout << "[Fixed] addition assignement operator called" << std::endl;
    return Fixed(this->toFloat() + t.toFloat());
}

Fixed   Fixed::operator-(const Fixed &t) const {
	if (this->_verbose)
		std::cout << "[Fixed] subtraction assignement operator called" << std::endl;
    return Fixed(this->toFloat() - t.toFloat());
}

Fixed   Fixed::operator*(const Fixed &t) const {
	if (this->_verbose)
		std::cout << "[Fixed] multiplication assignement operator called" << std::endl;
    return Fixed(this->toFloat() * t.toFloat());
}

Fixed   Fixed::operator/(const Fixed &t) const {
	if (this->_verbose)
		std::cout << "[Fixed] division assignement operator called" << std::endl;
	if (!t.toFloat())
		return  Fixed(0);
    return Fixed(this->toFloat() / t.toFloat());
}

/* --------------------- opérateurs d’incrémentation --------------------- */

// Préfixé ; retourne une valeur incrémentée :
Fixed&   Fixed::operator++(void) {
	if (this->_verbose)
		std::cout << "[Fixed] ++n operator called" << std::endl;
    ++this->_num;
    return *this;
}

// Postfixé ; retourne la valeur avant l'incrémentation :
Fixed   Fixed::operator++(int) {
	if (this->_verbose)
		std::cout << "[Fixed] n++ operator called" << std::endl;
    Fixed	tmp(*this);
    tmp._num = this->_num++;
    return tmp;
}

// Préfixé ; retourne une valeur incrémentée :
Fixed&   Fixed::operator--(void) {
	if (this->_verbose)
		std::cout << "[Fixed] --n operator called" << std::endl;
    --this->_num;
    return *this;
}

// Postfixé ; retourne la valeur avant l'incrémentation :
Fixed   Fixed::operator--(int) {
	if (this->_verbose)
		std::cout << "[Fixed] n-- operator called" << std::endl;
    Fixed	tmp(*this);
    tmp._num = this->_num--;
    return tmp;
}

/* --------------------------- min() && max() ---------------------------- */
Fixed	&Fixed::min(Fixed &t1, Fixed &t2) {
	if (t1 <= t2)
		return t1;
	return t2;
}

const Fixed	&Fixed::min(const Fixed &t1, const Fixed &t2) {
	if (t1 <= t2)
		return t1;
	return t2;
}

Fixed	&Fixed::max(Fixed &t1, Fixed &t2) {
	if (t1 >= t2)
		return t1;
	return t2;
}

const Fixed	&Fixed::max(const Fixed &t1, const Fixed &t2) {
	if (t1 >= t2)
		return t1;
	return t2;
}
