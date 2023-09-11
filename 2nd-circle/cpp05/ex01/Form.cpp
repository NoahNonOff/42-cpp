/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:12:23 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/09/11 10:47:07 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* ------------------------------ get & set ------------------------------ */
std::string	Form::getName(void) const { return _name; }
bool		Form::getSignature(void) const { return _signature; }
int			Form::getToSign(void) const { return _toSign; }
int			Form::getToExecute(void) const { return _toExecute; }

/* ------------------------------ canonique ------------------------------ */

Form::Form() : _name("no name"), _signature(false), _toSign(150), _toExecute(150) { std::cout << "test"; }

Form::Form(std::string name, int toSign, int toExecute) : _name(name), _signature(false), _toSign(toSign), _toExecute(toExecute) {
	if (toSign < 1)
		throw Form::GradeTooHighException();
	else if (toSign > 150)
		throw Form::GradeTooLowException();

	if (toExecute < 1)
		throw Form::GradeTooHighException();
	else if (toExecute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {}

Form::Form(const Form &src) : _name(src._name), _toSign(src._toSign), _toExecute(src._toExecute) { *this = src; }

Form	&Form::operator=(Form const &src) {
	if (this != &src) {
		this->_signature = src._signature;
	}
	return *this;
}

/* ------------------------------ functions ------------------------------ */

// Insert formatted output
std::ostream &operator<<(std::ostream &o, Form const &i) {
	return o << i.getName() << " form: signed(" << (i.getSignature()?"yes":"no") \
	<< ") [toSign:" << i.getToSign() << "/toExecute:" << i.getToExecute() << "]" << std::endl;
}

void	Form::beSigned(Bureaucrat const &bob) {
	if (bob.getGrade() > _toSign)
		throw Form::GradeTooLowException();
	else if (this->getSignature())
		throw std::logic_error("[Form] error: Form already signed");
	else
		_signature = true;
}

/* ------------------------------ exception ------------------------------ */

const char *Form::GradeTooHighException::what(void) const throw() { return "[Form] error: Grade too high"; }
const char *Form::GradeTooLowException::what(void) const throw() { return "[Form] error: grade too low"; }
