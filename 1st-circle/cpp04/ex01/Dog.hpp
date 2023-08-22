/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:32:38 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/19 10:09:07 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
	private:
		Brain	*brain;

	public:
		Dog();
		~Dog();
		Dog(const Dog &t);
		Dog	&operator=(const Dog &t);

		void		makeSound(void) const;
		std::string	getIdeas(const int i);
		void		setIdeas(const std::string idea, const int i);
};

#endif