/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:14:07 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/14 16:50:19 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
	return (0);
}