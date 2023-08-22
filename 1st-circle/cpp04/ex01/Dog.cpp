/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:32:36 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/19 10:34:09 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* ----------------------------------- canonique ----------------------------------- */

Dog::Dog() : Animal("Dog") {
	if (verbose)
		std::cout << "[Dog] default constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::~Dog() {
	if (verbose)
		std::cout << "[Dog] default destructor called" << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog &t) : Animal(t) {
	if (verbose)
		std::cout << "[Dog] copy constructor called" << std::endl;
	*this = t;
}

Dog	&Dog::operator=(const Dog &t) {
	if (verbose)
		std::cout << "[Dog] Copy assignement operator called" << std::endl;
	if (this != &t) {
		this->_type = t._type;
		this->brain = new Brain(*t.brain);
	}
	return *this;
}

/* ----------------------------------- set & get ----------------------------------- */

void		Dog::setIdeas(const std::string idea, const int i) {
	if (verbose)
		std::cout << "[Dog] setIdeas function called" << std::endl;
	if (i >= 100)
		return ;
	this->brain->setIdeas(idea, i);
}

std::string	Dog::getIdeas(const int i) {
	if (verbose)
		std::cout << "[Dog] getIdeas function called" << std::endl;
	return this->brain->getIdeas(i);
}

void	Dog::makeSound(void) const {
	std::cout << "waaf waaf!" << std::endl;
}