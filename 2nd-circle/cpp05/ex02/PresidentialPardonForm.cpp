/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:03:04 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/24 14:05:20 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* ------------------------------ canonique ------------------------------ */

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("no name", 25, 5), _target("no name") {}
PresidentialPardonForm::PresidentialPardonForm(std::string const &name, std::string const &target) : AForm(name, 25, 5), _target(target) {}
PresidentialPardonForm::~PresidentialPardonForm(void) {}

/* ------------------------------ functions ------------------------------ */

void	PresidentialPardonForm::execute(Bureaucrat const &bob) {
	if (bob.getGrade() > this->getToExecute())
		throw AForm::GradeTooLowException();
	std::cout << _target << " is forgiven by Zaphod Beeblebrox" << std::endl;
}