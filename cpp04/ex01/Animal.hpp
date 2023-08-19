/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:32:26 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/19 09:56:41 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "brain.hpp"

class Animal {
	protected:
		std::string			_type;

	public:
		Animal();
		Animal(const std::string type);
		virtual ~Animal();
		Animal(const Animal &t);
		Animal	&operator=(const Animal &t);

		std::string	getType(void) const;
		void		setType(const std::string type);

		virtual void	makeSound(void) const;
};

#endif