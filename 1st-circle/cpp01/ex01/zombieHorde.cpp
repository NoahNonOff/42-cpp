/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:23:03 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/20 15:36:10 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::give_name(std::string name) {this->name = name;}

Zombie*	zombieHorde(int N, std::string name)
{
	if (N < 1)
		return (NULL);
	Zombie	*ret = new Zombie[N];
	for (int i = 0; i < N; i++)
		ret[i].give_name(name);
	return (ret);
}
