/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:50:08 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/22 09:29:11 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* ------------------------------ get & set ------------------------------ */
std::string	Bureaucrat::getName(void) const { return this->_name; }
int	Bureaucrat::getGrade(void) const { return this->_grade; }

/* ------------------------------ canonique ------------------------------ */

Bureaucrat::Bureaucrat() : _name("no name"), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
	try {
		if (grade < 1 || grade > 150)
			throw grade;
	}
	catch (int num) {
		grade = 150;
		if (num < 1)
			std::cerr << "Bureaucrat::GradeTooHighException" << std::endl;
		if (num > 150)
			std::cerr << "Bureaucrat::GradeTooLowException" << std::endl;
	}
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &src) { *this = src; }

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &src) {
	if (this != &src) {
		this->_name = src._name;
		this->_grade = src._grade;
	}
	return *this;
}

/* ------------------------------ functions ------------------------------ */

// Insert formatted output
std::ostream &operator<<(std::ostream &o, Bureaucrat const &i) {
	return o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
}

void	Bureaucrat::upGrade() {
	try {
		if ((this->_grade - 1) < 1)
			throw 1;
	}
	catch (int num) {
		std::cerr << "Bureaucrat::GradeTooHighException" << std::endl;
		return ;
	}
	this->_grade--;
}

void	Bureaucrat::downGrade() {
	try {
		if ((this->_grade + 1) > 150)
			throw 1;
	}
	catch (int num) {
		std::cerr << "Bureaucrat::GradeTooLowException" << std::endl;
		return ;
	}
	this->_grade++;
}