/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 09:54:50 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/16 11:52:09 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string			_name;
		const static bool	_verbose = true;

	public:
		DiamondTrap();
		DiamondTrap(const std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &t);
		DiamondTrap 	&operator=(const DiamondTrap& t);

		//void	whoAmI(void);
};

# endif