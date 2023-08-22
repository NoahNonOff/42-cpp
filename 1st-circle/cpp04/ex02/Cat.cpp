/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:32:45 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/19 10:41:30 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* ----------------------------------- canonique ----------------------------------- */

Cat::Cat() : Animal("Cat") {
	if (verbose)
		std::cout << "[Cat] default constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::~Cat() {
	if (verbose)
		std::cout << "[Cat] default destructor called" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat &t) : Animal(t) {
	if (verbose)
		std::cout << "[Cat] copy constructor called" << std::endl;
	*this = t;
}

Cat	&Cat::operator=(const Cat &t) {
	if (verbose)
		std::cout << "[Cat] Copy assignement operator called" << std::endl;
	if (this != &t) {
		this->_type = t._type;
		this->brain = new Brain(*t.brain);
	}
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "miaou miaou!" << std::endl;
}

/* ----------------------------------- set & get ----------------------------------- */

void		Cat::setIdeas(const std::string idea, const int i) {
	if (verbose)
		std::cout << "[Cat] setIdeas function called" << std::endl;
	if (i >= 100)
		return ;
	this->brain->setIdeas(idea, i);
}

std::string	Cat::getIdeas(const int i) {
	if (verbose)
		std::cout << "[Cat] getIdeas function called" << std::endl;
	return this->brain->getIdeas(i);
}