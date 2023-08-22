/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:09:58 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/14 09:18:52 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class Point {
	private:
		const Fixed			_x;
		const Fixed 		_y;
		const static bool	_verbose = false;
	public:
		Point();
		Point(const float y, const float x);

		~Point();
		Point(const Point &t);
		Point	&operator=(const Point& t);

		Fixed	getX(void) const;
		Fixed	getY(void) const;
};

float	ft_abs(float n);
float	area(const Point &p1, const Point &p2, const Point &p3);
bool	bsp( Point const &a, Point const &b, Point const &c, Point const &point);

#endif