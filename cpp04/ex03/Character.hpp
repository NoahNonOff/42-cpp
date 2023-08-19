/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:27:04 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/19 16:34:26 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];

	public:
		Character();
		Character(std::string const &name);
		~Character();

		Character(Character const &src);
		Character	&operator=(Character const &src);	

		std::string const	&getName() const;
		AMateria    *getMateria(const int idx) const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);
};

#endif