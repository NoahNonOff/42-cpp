/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:39:15 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/24 13:53:14 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* ------------------------------ canonique ------------------------------ */

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("no name", 72, 45), _target("no name") {}
RobotomyRequestForm::RobotomyRequestForm(std::string const &name, std::string const &target) : AForm(name, 72, 45), _target(target) {}
RobotomyRequestForm::~RobotomyRequestForm(void) {}

/* ------------------------------ functions ------------------------------ */

void	RobotomyRequestForm::execute(Bureaucrat const &bob) {
	if (bob.getGrade() > this->getToExecute())
		throw AForm::GradeTooLowException();
	std::cout << "clang clang bzzzz bzzzz brrrr !" << std::endl;
	srand(time(NULL));
    int rand = std::rand();
    if (rand%2)
    	std::cout << _target << " is successfully robotomised" << std::endl;
    else
    	std::cout << _target << " isn't robotomised... operation failed" << std::endl;
}