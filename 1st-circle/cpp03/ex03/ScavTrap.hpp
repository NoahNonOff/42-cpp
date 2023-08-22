/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:52:10 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/16 10:46:52 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	protected:
		bool	_guardGate;
		const static bool	_verbose = false;

	public:
		ScavTrap();
		ScavTrap(const std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap &t);
		ScavTrap 	&operator=(const ScavTrap& t);

		void	attack(const std::string &target);
		void	guardGate(void);
};

#endif