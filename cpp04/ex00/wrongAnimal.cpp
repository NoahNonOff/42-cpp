/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:32:28 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/17 20:45:07 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.hpp"

/* ----------------------------------- get & set ----------------------------------- */
std::string	wrongAnimal::getType() const { return this->_type; }

void		wrongAnimal::setType(const std::string type) { this->_type = type; }

/* ----------------------------------- canonique ----------------------------------- */

wrongAnimal::wrongAnimal() : _type("wrongAnimal") {
	if (verbose)
		std::cout << "[wrongAnimal] default constructor called" << std::endl;
}

wrongAnimal::~wrongAnimal() {
	if (verbose)
		std::cout << "[wrongAnimal] default destructor called" << std::endl;
}

wrongAnimal::wrongAnimal(const wrongAnimal &t) {
	if (verbose)
		std::cout << "[wrongAnimal] copy constructor called" << std::endl;
	*this = t;
}

wrongAnimal	&wrongAnimal::operator=(const wrongAnimal &t) {
	if (verbose)
		std::cout << "[wrongAnimal] Copy assignement operator called" << std::endl;
	if (this != &t) {
		this->_type = t._type;
	}
	return *this;
}

void	wrongAnimal::makeSound(void) const {
	std::cout << "what the hell does an animal sound look like" << std::endl;
}