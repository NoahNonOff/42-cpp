/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:32:42 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/17 20:50:10 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "wrongAnimal.hpp"

class wrongCat : public wrongAnimal {
	public:
		wrongCat();
		~wrongCat();
		wrongCat(const wrongCat &t);
		wrongCat	&operator=(const wrongCat &t);

		virtual void	makeSound(void);
};

#endif