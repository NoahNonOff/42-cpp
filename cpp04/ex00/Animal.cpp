/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:32:28 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/18 11:15:29 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* ----------------------------------- get & set ----------------------------------- */
std::string	Animal::getType(void) const { return this->_type; }

void		Animal::setType(const std::string type) { this->_type = type; }

/* ----------------------------------- canonique ----------------------------------- */

Animal::Animal() : _type("Animal") {
	if (verbose)
		std::cout << "[Animal] default constructor called" << std::endl;
}

Animal::Animal(const std::string type) : _type(type) {
	if (verbose)
		std::cout << "[Animal] named constructor called" << std::endl;
}

Animal::~Animal() {
	if (verbose)
		std::cout << "[Animal] default destructor called" << std::endl;
}

Animal::Animal(const Animal &t) {
	if (verbose)
		std::cout << "[Animal] copy constructor called" << std::endl;
	*this = t;
}

Animal	&Animal::operator=(const Animal &t) {
	if (verbose)
		std::cout << "[Animal] Copy assignement operator called" << std::endl;
	if (this != &t) {
		this->_type = t._type;
	}
	return *this;
}

void	Animal::makeSound(void) const {
	std::cout << "what the hell does an animal sound look like" << std::endl;
}