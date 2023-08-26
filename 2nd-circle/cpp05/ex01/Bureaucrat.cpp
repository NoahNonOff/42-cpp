/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:50:08 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/23 17:57:43 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* ------------------------------ get & set ------------------------------ */
std::string	Bureaucrat::getName(void) const { return _name; }
int	Bureaucrat::getGrade(void) const { return _grade; }

/* ------------------------------ canonique ------------------------------ */

Bureaucrat::Bureaucrat() : _name("no name"), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
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
	if ((_grade + 1) < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void	Bureaucrat::downGrade() {
	if ((_grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}


void	Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	} catch (Form::GradeTooLowException &error) {
		std::cout << _name << " couldn't sign " << form.getName() << \
		" because: " << error.what() << std::endl;
	}
}


/* ------------------------------ exception ------------------------------ */

const char *Bureaucrat::GradeTooHighException::what(void) const throw() { return "[Bureaucrat] error: Grade too high"; }
const char *Bureaucrat::GradeTooLowException::what(void) const throw() { return "[Bureaucrat] error: Grade too low"; }