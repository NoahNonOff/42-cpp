/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:35:34 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/19 15:21:43 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &arc);

		virtual ~AMateria();
		AMateria	&operator=(const AMateria &src);

		std::string const &getType() const; // return the materia type
		void	setType(std::string const &type);

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif