/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 09:54:48 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/16 11:52:29 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

/* ----------------------------------- canonique ----------------------------------- */

DiamondTrap::DiamondTrap() {
	if (this->_verbose)
		std::cout << "[DiamondTrap] default constructor called" << std::endl;
	this->_name = "chatGpt";
	//Claptrap::_name = "chatGpt_clap_name";
	this->_hp = 100;
	this->_energy = 50;
	this->_damage = 30;
}

DiamondTrap::DiamondTrap(const std::string name) {
	if (this->_verbose)
		std::cout << "[DiamondTrap] named constructor called" << std::endl;
	//ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hp = 100;
	this->_energy = 50;
	this->_damage = 30;
}

DiamondTrap::~DiamondTrap() {
	if (this->_verbose)
		std::cout << "[DiamondTrap] default destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &t) : ClapTrap(t), ScavTrap(t), FragTrap(t)  {
	if (this->_verbose)
		std::cout << "[DiamondTrap] Copy constructor called" << std::endl;
	*this = t;
}

DiamondTrap 	&DiamondTrap::operator=(const DiamondTrap& t) {
	if (this->_verbose)
		std::cout << "[DiamondTrap] Copy assignement operator called" << std::endl;
	if (this != &t) {
		this->_name = t.getName();
		this->_hp = t.getHp();
		this->_energy = t.getEnergy();
		this->_damage = t.getDamage();
	}
	return *this;
}

/* ----------------------------------- functions ----------------------------------- */

/*void	DiamondTrap::whoAmI(void) {
	if (this->_verbose)
		std::cout << "[ClapTrap] whoImI function called" << std::endl;
	std::cout << "My name is " << Claptrap::_name << ", or ";
	std::cout << this->_name << " ... I don't really know" << std::endl;
}*/