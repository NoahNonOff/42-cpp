/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 22:40:17 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/22 13:03:00 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class	Weapon	{
	private:
		std::string	_type;
	public:
		Weapon(std::string type); // constructor
		~Weapon(); // destructor

		const std::string&	getType(void);
		void				setType(std::string str);
};

#endif
