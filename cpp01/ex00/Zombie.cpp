/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:18:26 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/20 14:37:35 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {this->name = name;}
Zombie::~Zombie(void) {}

void	Zombie::announce(void) {std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;}

