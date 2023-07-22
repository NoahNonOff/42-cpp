/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:27:24 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/20 14:32:11 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie_malloc;

	zombie_malloc = newZombie("zombie_malloc");
	zombie_malloc->announce();
	randomChump("Andreas");
	randomChump("Noah");
	randomChump("Baptiste");

	delete zombie_malloc;
	return 0;
}
