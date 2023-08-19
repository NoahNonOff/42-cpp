/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:27:02 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/19 16:36:33 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

ICharacter::~ICharacter() {}

/* ------------------------------ get & set ------------------------------ */

std::string const	&Character::getName() const { return this->_name; }

AMateria    *Character::getMateria(const int idx) const { return this->_inventory[idx]; }

/* ------------------------------ canonique ------------------------------ */

// default constructor
Character::Character(void) : _name("nothing") {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

// named constructor
Character::Character(std::string const &name) : _name(name) {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << "Character( " << this->_name << " ) created" << std::endl;
}

// default destructor
Character::~Character(void) {
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

// copy consructor
Character::Character(Character const &src) { *this = src; }

// copy assignement operator
Character	&Character::operator=(const Character &src) {
	if (this != &src) {
		this->_name = src._name;
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = src._inventory[i];
	}
	return *this;
}

/* ------------------------------ functions ------------------------------ */

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx) {
	if (this->_inventory[idx]) {
		this->_inventory[idx] = NULL;

	}
}

void	Character::use(int idx, ICharacter &target) {
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}