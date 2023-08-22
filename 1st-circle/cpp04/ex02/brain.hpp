/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:39:25 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/19 10:52:57 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define verbose true

class Brain {
	private:
		std::string	ideas[100];

	public:
		Brain();
		Brain(const std::string type);
		virtual ~Brain();
		Brain(const Brain &t);
		Brain	&operator=(const Brain &t);

		void		setIdeas(const std::string idea, const int i);
		std::string	getIdeas(const int i);
};

#endif