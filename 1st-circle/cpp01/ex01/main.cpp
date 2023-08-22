/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:25:33 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/20 15:44:28 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N = 25;
	Zombie	*horde = zombieHorde(N, "andreas");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete  [] horde;
	return (0);
}
