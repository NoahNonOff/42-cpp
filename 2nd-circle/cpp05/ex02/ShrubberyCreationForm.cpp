/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:43:01 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/24 12:58:10 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* ------------------------------ canonique ------------------------------ */

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("no name", 145, 137), _target("no name") {}
ShrubberyCreationForm::ShrubberyCreationForm(std::string const &name, std::string const &target) : AForm(name, 145, 137), _target(target) {}
ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

/* ------------------------------ functions ------------------------------ */

void	printTree(std::string const &name) {
	std::ofstream	f_out(name.c_str());

	f_out << "          &&& &&  & &&" << std::endl;
	f_out << "      && &\\/&\\|& ()|/ @, &&" << std::endl;
	f_out << "      &\\/(/&/&||/& /_/)_&/_&" << std::endl;
	f_out << "   &() &\\/&|()|/&\\/ '%\" & ()" << std::endl;
	f_out << "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
	f_out << "&&   && & &| &| /& & % ()& /&&" << std::endl;
	f_out << " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
	f_out << "     &&     \\|||" << std::endl;
	f_out << "             |||" << std::endl;
	f_out << "             |||" << std::endl;
	f_out << "             |||" << std::endl;
	f_out << "       , -=-~  .-^- _" << std::endl;
	f_out << "              `" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &bob) {
	if (bob.getGrade() > this->getToExecute())
		throw AForm::GradeTooLowException();
	printTree(_target + "_shrubbery");
}
