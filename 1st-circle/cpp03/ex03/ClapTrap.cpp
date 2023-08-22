/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:14:30 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/16 09:35:42 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ----------------------------------- get & set ----------------------------------- */
std::string	ClapTrap::getName() const { return this->_name; }
int			ClapTrap::getHp() const { return this->_hp; }
int			ClapTrap::getEnergy() const { return this->_energy; }
int			ClapTrap::getDamage() const { return this->_damage; }

void		ClapTrap::setName(const std::string name) { this->_name = name; }
void		ClapTrap::setHp(const int hp) { this->_hp = hp; }
void		ClapTrap::setEnergy(const int energy) { this->_energy = energy; }
void		ClapTrap::setDamage(const int damage) { this->_damage = damage; }

/* ----------------------------------- canonique ----------------------------------- */

ClapTrap::ClapTrap() : _name("chatGpt"), _hp(10), _energy(10), _damage(0) {
	if (this->_verbose)
		std::cout << "[ClapTrap] default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hp(10), _energy(10), _damage(0) {
	if (this->_verbose)
		std::cout << "[ClapTrap] named constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	if (this->_verbose)
		std::cout << "[ClapTrap] default destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &t) {
	if (this->_verbose)
		std::cout << "[ClapTrap] Copy constructor called" << std::endl;
	*this = t;
}

ClapTrap 	&ClapTrap::operator=(const ClapTrap& t) {
	if (this->_verbose)
		std::cout << "[ClapTrap] Copy assignement operator called" << std::endl;
	if (this != &t) {
		this->_name = t.getName();
		this->_hp = t.getHp();
		this->_energy = t.getEnergy();
		this->_damage = t.getDamage();
	}
	return *this;
}

/* ----------------------------------- functions ----------------------------------- */

void	ClapTrap::attack(const std::string &target) {
	if (this->_verbose)
		std::cout << "[ClapTrap] attack function called" << std::endl;
	if (this->_energy > 0 && this->_hp > 0) {
		std::cout << "ClapTrap " << this->_name << " attack " << target; 
		std::cout << ", causing " << this->_damage << " points of damage" << std::endl;
		this->_energy--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	int	health;
	if (this->_verbose)
		std::cout << "[ClapTrap] takeDamage function called" << std::endl;
	if (this->_hp == 0) {
		std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " take " << amount << " damage (";
	health = this->getHp();
	if ((health - (int)amount) < 0)
		this->setHp(0);
	else
		this->setHp(health - amount);
	std::cout << this->_hp << " remainning)" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_verbose)
		std::cout << "[ClapTrap] beRepaired function called" << std::endl;
	if (this->_energy > 0 && this->_hp > 0) {
		std::cout << "ClapTrap " << this->_name << " resore " << amount;
		this->setHp(this->_hp + amount);
		this->_energy--;
		std::cout << " (" << this->_hp << " remainning)" << std::endl;
	}
}