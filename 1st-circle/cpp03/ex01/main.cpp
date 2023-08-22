/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:14:07 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/16 09:42:59 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	a("gigaChad");

	a.attack("mob 1");
	a.takeDamage(4);
	a.attack("mob 2");
	a.beRepaired(5);
	a.takeDamage(9);
	a.attack("mod 3");
	a.takeDamage(25);
	a.takeDamage(1);

	std::cout << "----------------------------------"<< std::endl;
	ScavTrap	robot("ROBOT-2.0");

	robot.attack("your mom");
	robot.attack("a guy");
	robot.takeDamage(45);
	robot.takeDamage(62);
	robot.takeDamage(36);
	robot.attack("an apple");
	robot.guardGate();
	return (0);
}