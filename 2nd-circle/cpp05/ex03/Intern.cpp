/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:42:01 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/25 10:30:33 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::~Intern(void) {}

Intern::Intern(Intern &src) { *this = src; }

Intern 	&Intern::operator=(const Intern& src) {
	(void)src;
	return *this;
}

void	*Intern::makeForm(std::string const &name, std::string const &target) {
	if (name == "shrubbery-creation") {
		std::cout << "Intern creates " << name << " form" << std::endl;
		return new ShrubberyCreationForm(name, target);
	}
	else if (name == "robotomy-request") {
		std::cout << "Intern creates " << name << " form" << std::endl;
		return new RobotomyRequestForm(name, target);
	}
	else if (name == "presidential-pardon") {
		std::cout << "Intern creates " << name << " form" << std::endl;
		return new PresidentialPardonForm(name, target);
	}
	std::cerr << "error: \"" << name << "\" no such form" << std::endl;
	return NULL;
}