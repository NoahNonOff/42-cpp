/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:52:14 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/16 09:38:07 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* ----------------------------------- canonique ----------------------------------- */

FragTrap::FragTrap() {
	if (this->_verbose)
		std::cout << "[FragTrap] default constructor called" << std::endl;
	this->_hp = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::FragTrap(const std::string name) {
	if (this->_verbose)
		std::cout << "[FragTrap] named constructor called" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::~FragTrap() {
	if (this->_verbose)
		std::cout << "[FragTrap] default destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &t) : ClapTrap(t) {
	if (this->_verbose)
		std::cout << "[FragTrap] Copy constructor called" << std::endl;
	*this = t;
}

FragTrap 	&FragTrap::operator=(const FragTrap& t) {
	if (this->_verbose)
		std::cout << "[FragTrap] Copy assignement operator called" << std::endl;
	if (this != &t) {
		this->_name = t.getName();
		this->_hp = t.getHp();
		this->_energy = t.getEnergy();
		this->_damage = t.getDamage();
	}
	return *this;
}

/* ----------------------------------- functions ----------------------------------- */

void	FragTrap::highFivesGuys(void) {
	if (this->_verbose)
		std::cout << "[FragTrap] highFivesGuys function called" << std::endl;
	std::cout << this->_name << " want to do a high five" << std::endl;
}