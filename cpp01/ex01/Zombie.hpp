/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:14:46 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/20 15:37:59 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class	Zombie {
	private:
		std::string	name;
	public:
		void	announce(void);
		void	give_name(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif
