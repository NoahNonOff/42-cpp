/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:35:59 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/19 15:21:31 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* ------------------------------ get & set ------------------------------ */

std::string const &AMateria::getType(void) const { return this->_type; }

void	AMateria::setType(std::string const &type) { this->_type = type; }

/* ------------------------------ canonique ------------------------------ */

// default constructor
AMateria::AMateria(void) : _type("") {}

// named constructor
AMateria::AMateria(std::string const &type) : _type(type) {
	std::cout << "AMateria( " << this->_type << " ) created" << std::endl;
}

// default destructor
AMateria::~AMateria(void) {}

// copy consructor
AMateria::AMateria(AMateria const &src) { *this = src; }

// copy assignement operator
AMateria	&AMateria::operator=(const AMateria &src) {
	if (this != &src) {
		this->_type = src._type;
	}
	return *this;
}

/* ------------------------------ functions ------------------------------ */

AMateria *AMateria::clone(void) const { return (AMateria*)this; }

void AMateria::use(ICharacter& target) {
	std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}