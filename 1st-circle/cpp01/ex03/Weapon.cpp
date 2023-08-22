/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:30:43 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/22 13:19:48 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->setType(type);
}
Weapon::~Weapon() {}

void	Weapon::setType(std::string str) {this->_type = str;}
const std::string&	Weapon::getType(void) {return this->_type;}
