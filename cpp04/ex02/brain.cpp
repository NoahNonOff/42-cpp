/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:39:27 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/19 10:32:13 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

/* ----------------------------------- canonique ----------------------------------- */

Brain::Brain() {
	if (verbose)
		std::cout << "[Brain] default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "";
}

Brain::~Brain() {
	if (verbose)
		std::cout << "[Brain] default destructor called" << std::endl;
}

Brain::Brain(const Brain &t) {
	if (verbose)
		std::cout << "[Brain] copy constructor called" << std::endl;
	*this = t;
}

Brain	&Brain::operator=(const Brain &t) {
	if (verbose)
		std::cout << "[Brain] Copy assignement operator called" << std::endl;
	if (this != &t) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = t.ideas[i];
		}
	}
	return *this;
}

void		Brain::setIdeas(const std::string idea, const int i) {
	if (verbose)
		std::cout << "[Brain] setIdeas function called" << std::endl;
	if (i >= 100)
		return ;
	this->ideas[i] = idea;
}

std::string	Brain::getIdeas(const int i) {
	if (verbose)
		std::cout << "[Brain] getIdeas function called" << std::endl;
	if (i >= 100)
		return "";
	return this->ideas[i];
}