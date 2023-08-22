/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:59:34 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/19 16:18:58 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

IMateriaSource::~IMateriaSource() {}

/* ------------------------------ canonique ------------------------------ */

// default constructor
MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

// default destructor
MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; i++)
		if (this->materias[i])
			delete this->materias[i];
}

// copy consructor
MateriaSource::MateriaSource(MateriaSource const &src) { *this = src; }

// copy assignement operator
MateriaSource	&MateriaSource::operator=(const MateriaSource &src) {
	if (this != &src) {
		for (int i = 0; i < 4; i++)
			materias[i] = src.materias[i];
	}
	return *this;
}

/* ------------------------------ functions ------------------------------ */

AMateria*	MateriaSource::getMateria(std::string const &type) {
	for (int i = 0; i < 4; i++)
		if (this->materias[i] && this->materias[i]->getType() == type)
			return (this->materias[i]);
	return NULL;
}

AMateria*	MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++)
		if (this->materias[i] && this->materias[i]->getType() == type)
			return materias[i]->clone();
	return NULL;
}

void		MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (this->materias[i] == NULL) {
			this->materias[i] = m;
			return ;
		}
	}
	delete m;
}