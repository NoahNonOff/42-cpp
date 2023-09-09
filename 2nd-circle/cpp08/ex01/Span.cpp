/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:29:08 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/09/09 14:13:33 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* ------------------------ canonique ------------------------ */

Span::Span(void) {}

Span::Span(unsigned int N) : _N(N) {}

Span::~Span(void) {}

Span::Span(Span const &src) { *this = src; }

Span	&Span::operator=(Span const &src) {
	if (this != &src) {
		this->_N = src._N;
		this->_lst = src._lst;
	}
	return *this;
}

/* ------------------------- methods ------------------------- */

void	Span::addNumber(int num) {
	if (_lst.size() >= _N)
		throw std::out_of_range("list is full");
	_lst.push_back(num);
}

// void Span::addNumber(std::lst<int>::const_iterator Begin, std::list<int>::const_iterator End) {
// 	if (_lst.size() > _N)
// 		throw std::out_of_range("list is full");
// 	_lst.insert(_lst.end(), Begin, End);
// }

void	Span::addnNumber(int nb_elem, ...) {

	va_list		args;
	va_start(args, nb_elem);

	for (int i = 0; i < nb_elem; i++)
		this->addNumber(va_arg(args, int));
	va_end(args);
}

unsigned int	Span::longestSpan(void) {
	if (_lst.size() < 2)
		throw std::out_of_range("not enought nodes");
	return *std::max_element(_lst.begin(), _lst.end()) - *std::min_element(_lst.begin(), _lst.end());
}

unsigned int	Span::shortestSpan(void) {
	if (_lst.size() < 2)
		throw std::out_of_range("not enought nodes");

	unsigned	min = longestSpan();
	for (std::list<int>::const_iterator it1 = _lst.begin(); it1 != _lst.end(); it1++) {
		for (std::list<int>::const_iterator it2 = _lst.begin(); it2 != _lst.end(); it2++) {
			if (it1 == it2)
				continue ;
			else if (std::abs(*it1 - *it2) < (int)min)
				min = (unsigned)std::abs(*it1 - *it2);
		}
	}
	return min;
}