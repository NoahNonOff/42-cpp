/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:08:22 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/22 13:24:44 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA {
	private:
		std::string	_name;
		Weapon&		_weapon; // take a ref to weapon
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();

		void	attack() const;
};

#endif
