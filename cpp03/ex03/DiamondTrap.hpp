/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 09:54:50 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/16 12:16:44 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string			_name;
		const static bool	_verbose = true;

	public:
		DiamondTrap(const std::string name);
		~DiamondTrap();

		using   ScavTrap::attack;
		void	whoAmI(void);
};

# endif