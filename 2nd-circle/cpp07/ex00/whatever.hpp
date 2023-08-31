/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:16:26 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/31 15:35:57 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template <typename T> T max(T &x, T &y) {
	return (x > y) ? x : y;
}

template <typename T> T min(T &x, T &y) {
	return (x < y) ? x : y;
}

template <typename T> void swap(T &a, T &b) {
	T	tmp = a;
	a = b;
	b = tmp;
}

#endif