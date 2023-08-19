/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:32:42 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/19 10:10:48 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {
	private:
		Brain	*brain;

	public:
		Cat();
		~Cat();
		Cat(const Cat &t);
		Cat	&operator=(const Cat &t);

		void	makeSound(void) const;
		std::string	getIdeas(const int i);
		void		setIdeas(const std::string idea, const int i);
};

#endif