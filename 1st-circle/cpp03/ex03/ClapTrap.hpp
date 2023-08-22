/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:14:23 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/16 12:15:50 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		std::string			_name;
		int					_hp;
		int					_energy;
		int					_damage;
		const static bool	_verbose = true;

	public:
		ClapTrap();
		ClapTrap(const std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &t);
		ClapTrap 	&operator=(const ClapTrap& t);

		std::string	getName() const ;
		int			getHp() const ;
		int			getEnergy() const ;
		int			getDamage() const ;

		void		setName(const std::string name);
		void		setHp(const int hp);
		void		setEnergy(const int energy);
		void		setDamage(const int damage);

		virtual void	attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif