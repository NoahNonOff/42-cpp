/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:32:26 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/17 20:53:44 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

# define verbose true

class wrongAnimal {
	protected:
		std::string			_type;

	public:
		wrongAnimal();
		virtual ~wrongAnimal();
		wrongAnimal(const wrongAnimal &t);
		wrongAnimal	&operator=(const wrongAnimal &t);

		std::string	getType(void) const;
		void		setType(const std::string type);

		virtual void	makeSound(void) const;
};

#endif