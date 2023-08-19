/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:53:21 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/19 15:30:55 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_HPP
# define IMATERIA_HPP

# include "AMateria.hpp"

class IMateriaSource {
	public:
		virtual ~IMateriaSource();
		virtual void	learnMateria(AMateria *src) = 0;
		virtual AMateria	*createMateria(std::string const &type) = 0;
	
};

#endif