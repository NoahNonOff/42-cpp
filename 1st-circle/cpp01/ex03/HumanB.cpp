/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:30:00 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/22 13:22:25 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	this->_weapon = NULL;
}
HumanB::~HumanB(void) {}

void    HumanB::setWeapon(Weapon& weapon) {this->_weapon = &weapon;}

void	HumanB::attack(void) const
{
	std::cout << this->_name;
	if (this->_weapon == NULL || this->_weapon->getType() == "")
		std::cout << " have no weapon yet" << std::endl;
	else {
		std::cout << " attacks with their ";
		std::cout << this->_weapon->getType() << std::endl;
	}
}
