/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:14:46 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/20 14:36:23 by nbeaufil         ###   ########.fr       */
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
		Zombie(std::string name);
		~Zombie(void);
};

Zombie	*newZombie(std::string	name);
void	randomChump(std::string name);

#endif
