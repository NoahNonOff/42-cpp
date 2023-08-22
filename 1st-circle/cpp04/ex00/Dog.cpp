/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:32:36 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/18 11:15:25 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* ----------------------------------- canonique ----------------------------------- */

Dog::Dog() : Animal("Dog") {
	if (verbose)
		std::cout << "[Dog] default constructor called" << std::endl;
}

Dog::~Dog() {
	if (verbose)
		std::cout << "[Dog] default destructor called" << std::endl;
}

Dog::Dog(const Dog &t) : Animal(t) {
	if (verbose)
		std::cout << "[Dog] copy constructor called" << std::endl;
	*this = t;
}

Dog	&Dog::operator=(const Dog &t) {
	if (verbose)
		std::cout << "[Dog] Copy assignement operator called" << std::endl;
	if (this != &t) {
		this->_type = t._type;
	}
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "waaf waaf!" << std::endl;
}