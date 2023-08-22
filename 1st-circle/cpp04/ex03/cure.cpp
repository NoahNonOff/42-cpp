/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:01:40 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/19 15:24:05 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cure.hpp"

/* ------------------------------ canonique ------------------------------ */

// default constructor
Cure::Cure(void) : AMateria("cure") {}

// default destructor
Cure::~Cure(void) {}

// copy consructor
Cure::Cure(Cure const &src) : AMateria("cure") { *this = src; }

// copy assignement operator
Cure	&Cure::operator=(const Cure &src) {
	if (this != &src) {
		this->_type = src._type;
	}
	return *this;
}

/* ------------------------------ functions ------------------------------ */

// new for deep copy
AMateria	*Cure::clone() const { return (new Cure(*this)); }

void		Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}