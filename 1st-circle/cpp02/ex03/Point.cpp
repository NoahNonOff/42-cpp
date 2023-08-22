/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:11:26 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/14 09:18:39 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* ------------------------------ get AND set ------------------------------ */
Fixed	Point::getX(void) const { return this->_x; }
Fixed	Point::getY(void) const { return this->_y; }

/* ------------------------------ constructor ------------------------------ */

// default constructor
Point::Point() : _x(0), _y(0) {
	if (this->_verbose)
		std::cout << "[Point] Default constructor called" << std::endl;
}

// float constructor
Point::Point(const float x, const float y) : _x(x), _y(y) {
	if (this->_verbose)
		std::cout << "[Point] Float constructor called" << std::endl;
}

// copy constructor
Point::Point(const Point &t) {
	if (this->_verbose)
		std::cout << "[Point] Copy constructor called" << std::endl;
	*this = t;
}

// copy assignement operator
Point	&Point::operator=(const Point& t) {
	if (this->_verbose)
		std::cout << "[Point] Copy assignement operator called" << std::endl;
	if (this != &t) {
		(Fixed)this->_x = t.getX();
		(Fixed)this->_y = t.getY();
	}
	return *this;
}

// default destructor
Point::~Point() {
	if (this->_verbose)
		std::cout << "[Point] Destructor called" << std::endl;
}
/* ------------------------------- functions ------------------------------- */

float	ft_abs(float n) {
	if (n < 0)
		return -n;
	return n;
}

float	area(const Point &p1, const Point &p2, const Point &p3)
{
	float	x1 = p1.getX().toFloat();
	// std::cout << p1.getX() << std::endl;
	float	y1 = p1.getY().toFloat();
	float	x2 = p2.getX().toFloat();
	float	y2 = p2.getY().toFloat();
	float	x3 = p3.getX().toFloat();
	float	y3 = p3.getY().toFloat();

	return ft_abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}

bool	bsp(Point const &a, Point const &b, Point const &c, Point const &point) {
	// std::cout << a.getX() << std::endl;	
	float	A = area(a, b, c); // ABC
	float	A1 = area(point, b, c); // PBC
	float	A2 = area(a, point, c); // PAC
	float	A3 = area(a, b, point); // PAB
	return (A == A1 + A2 + A3);
}
