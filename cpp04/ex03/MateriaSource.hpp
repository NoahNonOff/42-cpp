/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:59:37 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/19 16:19:01 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*materias[4];

	public:
		MateriaSource();
		~MateriaSource();

		MateriaSource(MateriaSource const &src);
		MateriaSource	&operator=(MateriaSource const &src);

		AMateria*	getMateria(std::string const &type);
		AMateria*	createMateria(std::string const &type);
		void		learnMateria(AMateria *m);
};

#endif