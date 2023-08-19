/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:32:45 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/17 20:46:55 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongCat.hpp"

/* ----------------------------------- canonique ----------------------------------- */

wrongCat::wrongCat() {
	if (verbose)
		std::cout << "[wrongCat] default constructor called" << std::endl;
	this->_type = "wrongCat";
}

wrongCat::~wrongCat() {
	if (verbose)
		std::cout << "[wrongCat] default destructor called" << std::endl;
}

wrongCat::wrongCat(const wrongCat &t) : wrongAnimal(t) {
	if (verbose)
		std::cout << "[wrongCat] copy constructor called" << std::endl;
	*this = t;
}

wrongCat	&wrongCat::operator=(const wrongCat &t) {
	if (verbose)
		std::cout << "[wrongCat] Copy assignement operator called" << std::endl;
	if (this != &t) {
		this->_type = t._type;
	}
	return *this;
}

void	wrongCat::makeSound(void) {
	std::cout << "miaou miaou!" << std::endl;
}