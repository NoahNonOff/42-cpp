/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:14:07 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/16 12:15:07 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

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
	ScavTrap	b("ROBOT-2.0");

	b.attack("your mom");
	b.attack("a guy");
	b.takeDamage(45);
	b.takeDamage(62);
	b.takeDamage(36);
	b.attack("an apple");
	b.guardGate();

	std::cout << "----------------------------------"<< std::endl;
	FragTrap	c("Karl Marx");

	c.attack("your mom");
	c.attack("a guy");
	c.takeDamage(45);
	c.takeDamage(62);
	c.takeDamage(36);
	b.attack("an apple");
	c.highFivesGuys();

	std::cout << "----------------------------------"<< std::endl;
	DiamondTrap	d("Zemmour");
	DiamondTrap z(d);

	d.attack("your mom");
	d.attack("a guy");
	d.takeDamage(45);
	d.takeDamage(62);
	d.takeDamage(36);
	d.attack("an apple");
	d.highFivesGuys();

	d.whoAmI();
	return (0);
}