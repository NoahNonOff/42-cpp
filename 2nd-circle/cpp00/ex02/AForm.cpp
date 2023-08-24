/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:12:23 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/24 12:49:35 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"

/* ------------------------------ get & set ------------------------------ */
std::string	AForm::getName(void) const { return _name; }
bool		AForm::getSignature(void) const { return _signature; }
int			AForm::getToSign(void) const { return _toSign; }
int			AForm::getToExecute(void) const { return _toExecute; }

/* ------------------------------ canonique ------------------------------ */

AForm::AForm() : _name("no name"), _signature(false), _toSign(150), _toExecute(150) { std::cout << "test"; }

AForm::AForm(std::string name, int toSign, int toExecute) : _name(name), _signature(false) {
	if (toSign < 1 || toSign > 150) {
		if (toSign < 1)
			throw AForm::GradeTooHighException();
		else if (toSign > 150)
			throw AForm::GradeTooLowException();
	}

	if (toExecute < 1 || toExecute > 150) {
		if (toExecute < 1)
			throw AForm::GradeTooHighException();
		else if (toExecute > 150)
			throw AForm::GradeTooLowException();
	}

	this->_toSign = toSign;
	this->_toExecute = toExecute;
}

AForm::~AForm() {}

AForm::AForm(const AForm &src) : _name(src._name) { *this = src; }

AForm	&AForm::operator=(AForm const &src) {
	if (this != &src) {
		this->_signature = src._signature;
		this->_toSign = src._toSign;
		this->_toExecute = src._toExecute;
	}
	return *this;
}

/* ------------------------------ functions ------------------------------ */

// Insert Aformatted output
std::ostream &operator<<(std::ostream &o, AForm const &i) {
	return o << i.getName() << " Aform: signed(" << (i.getSignature()?"yes":"no") \
	<< ") [toSign:" << i.getToSign() << "/toExecute:" << i.getToExecute() << "]" << std::endl;
}

void	AForm::beSigned(Bureaucrat const &bob) {
	if (bob.getGrade() > _toSign)
		throw AForm::GradeTooLowException();
	else
		_signature = true;
}

void	AForm::execute(Bureaucrat const &bob) {
	if (bob.getGrade() > _toExecute)
		throw AForm::GradeTooLowException();
	else
		std::cout << _name << " is executed by " << bob.getName() << std::endl;
}

/* ------------------------------ exception ------------------------------ */

const char *AForm::GradeTooHighException::what(void) const throw() { return "[AForm] error: Grade too high"; }
const char *AForm::GradeTooLowException::what(void) const throw() { return "[AForm] error: grade too low"; }
