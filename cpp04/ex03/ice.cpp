/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:01:40 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/19 15:24:24 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ice.hpp"

/* ------------------------------ canonique ------------------------------ */

// default constructor
Ice::Ice(void) : AMateria("ice") {}

// default destructor
Ice::~Ice(void) {}

// copy consructor
Ice::Ice(Ice const &src) : AMateria("ice") { *this = src; }

// copy assignement operator
Ice	&Ice::operator=(const Ice &src) {
	if (this != &src) {
		this->_type = src._type;
	}
	return *this;
}

/* ------------------------------ functions ------------------------------ */

// new for deep copy
AMateria	*Ice::clone() const { return (new Ice(*this)); }

void		Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}