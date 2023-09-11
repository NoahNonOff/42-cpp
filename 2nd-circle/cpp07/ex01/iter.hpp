/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:16:26 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/31 17:10:36 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>
# include <cstdlib>

template <typename T, typename S, typename F> void iter(T tab[], S size, F funct)
{
	for (int i = 0; i < (int)size; i++) {
		funct(tab[i]);
	}
}

#endif