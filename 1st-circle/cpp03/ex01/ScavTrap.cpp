/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:52:14 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/16 09:39:48 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* ----------------------------------- canonique ----------------------------------- */

ScavTrap::ScavTrap() {
	if (this->_verbose)
		std::cout << "[ScavTrap] default constructor called" << std::endl;
	this->_guardGate = false;
	this->_hp = 100;
	this->_energy = 50;
	this->_damage = 20;
}

ScavTrap::ScavTrap(const std::string name) {
	if (this->_verbose)
		std::cout << "[ScavTrap] named constructor called" << std::endl;
	this->_name = name;
	this->_guardGate = false;
	this->_hp = 100;
	this->_energy = 50;
	this->_damage = 20;
}

ScavTrap::~ScavTrap() {
	if (this->_verbose)
		std::cout << "[ScavTrap] default destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &t) : ClapTrap(t) {
	if (this->_verbose)
		std::cout << "[ScavTrap] Copy constructor called" << std::endl;
	*this = t;
}

ScavTrap 	&ScavTrap::operator=(const ScavTrap& t) {
	if (this->_verbose)
		std::cout << "[ScavTrap] Copy assignement operator called" << std::endl;
	if (this != &t) {
		this->_name = t.getName();
		this->_hp = t.getHp();
		this->_energy = t.getEnergy();
		this->_damage = t.getDamage();
	}
	return *this;
}

/* ----------------------------------- functions ----------------------------------- */

void	ScavTrap::attack(const std::string &target) {
	if (this->_verbose)
		std::cout << "[ScavTrap] attack function called" << std::endl;
	if (this->_energy > 0 && this->_hp > 0) {
		std::cout << "ScavTrap " << this->_name << " punch " << target;
		std::cout << " " << this->_damage << " times in a row" << std::endl;
		this->_energy--;
	}
}

void	ScavTrap::guardGate(void) {
	if (this->_verbose)
		std::cout << "[ScavTrap] guardGate function called" << std::endl;
	std::cout << this->_name << " has activate the guardGate" << std::endl;
	this->_guardGate = true;
}