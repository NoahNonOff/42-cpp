/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:12:23 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/22 13:20:18 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* ------------------------------ get & set ------------------------------ */
std::string	Form::getName(void) const { return this->_name; }
bool		Form::getSignature(void) const { return this->_signature; }
int			Form::getToSign(void) const { return this->_toSign; }
int			Form::getToExecute(void) const { return this->_toExecute; }

/* ------------------------------ canonique ------------------------------ */

Form::Form() : _name("no name"), _signature(false), _toSign(150), _toExecute(150) {}

Form::Form(std::string name, int toSign, int toExecute) : _name(name), _signature(false) {
	try {
		if (toSign < 1 || toSign > 150)
			throw toSign;
	}
	catch (int num) {
		toSign = 150;
		std::cerr << ((num < 1) ? HIGH : LOW) << std::endl;
	}

	try {
		if (toExecute < 1 || toExecute > 150)
			throw toExecute;
	}
	catch (int num) {
		toExecute = 150;
		std::cerr << ((num < 1) ? HIGH : LOW) << std::endl;
	}
	this->_toSign = toSign;
	this->_toExecute = toExecute;
}

Form::~Form() {}

Form::Form(const Form &src) { *this = src; }

Form	&Form::operator=(Form const &src) {
	if (this != &src) {
		this->_name = src._name;
		this->_signature = src._signature;
		this->_toSign = src._toSign;
		this->_toExecute = src._toExecute;
	}
	return *this;
}

/* ------------------------------ functions ------------------------------ */

// Insert formatted output
std::ostream &operator<<(std::ostream &o, Form const &i) {
	return o << i.getName() << " form: signed(" << i.getSignature() << ") [toSign:" << i.getToSign() << "/toExecute:" << i.getToExecute() << "]" << std::endl;
}
