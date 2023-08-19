/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:01:38 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/19 14:19:33 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();

		Cure(Cure const &src);
		Cure	&operator=(Cure const &src);

		virtual AMateria	*clone() const;
		virtual void		use(ICharacter &target);
};

#endif