/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:42:01 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/09/11 11:05:46 by nbeaufil         ###   ########.fr       */
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

	int 		i = 0;
	std::string	type[4] = { "shrubbery-creation", "robotomy-request", "presidential-pardon" };
	while (i < 4 && type[i].compare(name))
		i++;

	switch (i) {

		case 0:
			std::cout << "Intern creates " << name << " form" << std::endl;
			return new ShrubberyCreationForm(name, target);
			break ;
		case 1:
			std::cout << "Intern creates " << name << " form" << std::endl;
			return new RobotomyRequestForm(name, target);
			break ;
		case 2:
			std::cout << "Intern creates " << name << " form" << std::endl;
			return new PresidentialPardonForm(name, target);
			break ;
		default:
			std::cerr << "error: \"" << name << "\" no such form" << std::endl;
	}
	return NULL;
}