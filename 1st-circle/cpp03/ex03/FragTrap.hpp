/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:52:10 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/16 10:45:59 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
# define FragTrap_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	protected:
		const static bool	_verbose = false;

	public:
		FragTrap();
		FragTrap(const std::string name);
		~FragTrap();
		FragTrap(const FragTrap &t);
		FragTrap 	&operator=(const FragTrap& t);

		void	highFivesGuys(void);
};

#endif