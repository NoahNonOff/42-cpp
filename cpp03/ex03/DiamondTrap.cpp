/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 09:54:48 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/16 12:15:15 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

/* ----------------------------------- canonique ----------------------------------- */

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name) {
	if (this->_verbose)
		std::cout << "[DiamondTrap] named constructor called" << std::endl;
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->_hp = 100;
	this->_energy = 50;
	this->_damage = 30;
}

DiamondTrap::~DiamondTrap() {
	if (this->_verbose)
		std::cout << "[DiamondTrap] default destructor called" << std::endl;
}

/* ----------------------------------- functions ----------------------------------- */

void	DiamondTrap::whoAmI(void) {
	if (this->_verbose)
		std::cout << "[DiamondTrap] whoImI function called" << std::endl;
	std::cout << "My clap name is " << ClapTrap::_name << " and my actual name is ";
	std::cout << this->_name << " I'm glad to see you" << std::endl;
}