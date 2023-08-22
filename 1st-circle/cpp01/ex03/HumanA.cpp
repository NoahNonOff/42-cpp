/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:15:46 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/22 13:16:10 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {}
HumanA::~HumanA(void) {}

void	HumanA::attack(void) const
{
	if (this->_weapon.getType() != "") {
		std::cout << this->_name << " attacks with their ";
		std::cout << this->_weapon.getType() << std::endl;
	}
	else {
		std::cout << this->_name << " dont have weapon yet" << std::endl;
	}
}
