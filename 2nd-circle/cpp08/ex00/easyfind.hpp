/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:32:59 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/09/01 14:00:49 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <list>
# include <algorithm>

template <class T> int	easyfind(T container, int pattern) {
	if (std::find(container.begin(), container.end(), pattern) != container.end()) {
		std::cout << "[" << pattern << "] find in the container (";
		return 1;
	}
	std::cout << "[" << pattern << "] impossible to find in the container (";
	return 0;
};

#endif