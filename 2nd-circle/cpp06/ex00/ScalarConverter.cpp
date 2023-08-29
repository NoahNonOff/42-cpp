/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:50:08 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/29 14:01:34 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/* ------------------------------ static ------------------------------ */

int				ScalarConverter::_int = 0;
char			ScalarConverter::_char = 0;
float			ScalarConverter::_float = 0.0f;
double			ScalarConverter::_double = 0.0;
bool			ScalarConverter::_impossible = false;
TYPE			ScalarConverter::_type = NONE;
std::string		ScalarConverter::_str = "";

/* ------------------------------ get & set ------------------------------ */
char	ScalarConverter::getChar(void) /* const */ { return _char; }
void	ScalarConverter::setChar(char const &n) { _char = n; }

int		ScalarConverter::getInt(void) /* const */ { return _int; }
void	ScalarConverter::setInt(int const &n) { _int = n; }

float	ScalarConverter::getFloat(void) /* const */ { return _float; }
void	ScalarConverter::setFloat(float const &n) { _float = n; }

double	ScalarConverter::getDouble(void) /* const */ { return _double; }
void	ScalarConverter::setDouble(double const &n) { _double = n; }

std::string	ScalarConverter::getStr(void) /* const */ { return _str; }

void	ScalarConverter::setStr(std::string const &str) { 
	_str = str;
	setType();
	if (getType() == NONE)
		throw ScalarConverter::ConvertException();
}

TYPE	ScalarConverter::getType(void) /* const */ { return _type; }

void	ScalarConverter::setType(void) {
	if (isChar(_str))
		_type = CHAR;
	else if (isInt(_str))
		_type = INT;
	else if (isFloat(_str))
		_type = FLOAT;
	else if (isDouble(_str))
		_type = DOUBLE;
	else if (isLiteral(_str))
		_type = LITERAL;
	else
		_type = NONE;
}

/* ------------------------------ canonique ------------------------------ */

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &src) { *this = src; }

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &src) {
	if (this != &src) {

		this->_str = src._str;
		this->_type = src._type;
		this->_impossible = src._impossible;

		this->_int = src._int;
		this->_char = src._char;
		this->_float = src._float;
		this->_double = src._double;
	}
	return *this;
}

/* ------------------------------ functions ------------------------------ */

// Insert formatted output
std::ostream &operator<<(std::ostream &o, ScalarConverter const &i) {
	o << "TYPE: "; i.printType();
	o << "char: "; i.printChar();
	o << "int: "; i.printInt();
	o << "float: "; i.printFloat();
	o << "double: "; i.printDouble();
	return o;
}

const char *ScalarConverter::ConvertException::what(void) const throw() {
	return "bad type corruption";
}

bool	ScalarConverter::isImpossible(void) {
	try {
		if (_type == INT)
			std::istringstream(_str) >> _int;
		else if (_type == FLOAT)
			_float = atof(_str.c_str());
		else if (_type == DOUBLE)
			_double = strtod(_str.c_str(), NULL);
	}
	catch (const std::exception &error) {
		_impossible = true;
		return true;
	}
	return false;
}

void	ScalarConverter::convert(void) {
	if (isImpossible())
		return ;
	switch (_type) {
		case CHAR:
			_char = _str[0];
			_int = static_cast<int>(_char);
			_float = static_cast<float>(_char);
			_double = static_cast<double>(_char);
			break ;
		case INT:
			std::istringstream(_str) >> _int; 
			_char = static_cast<char>(_int);
			_float = static_cast<float>(_int);
			_double = static_cast<double>(_int);
			break ;
		case FLOAT:
			_float = atof(_str.c_str());
			_int = static_cast<int>(_float);
			_char = static_cast<char>(_float);
			_double = static_cast<double>(_float);
			break ;
		case DOUBLE:
			_double = strtod(_str.c_str(), NULL);
			_int = static_cast<int>(_double);
			_char = static_cast<char>(_double);
			_float = static_cast<float>(_double);
			break ;
		default:
			break ;
	}
}

/* ------------------------------- is_type? ------------------------------ */

bool	isChar(std::string const &str) {
	return str.length() == 1 && std::isalpha(str[0]) && std::isprint(str[0]);
}

bool	isInt(std::string const &str) {
	int	i = 0;

	if (str[i] == '-' || str[i] == '+')
		i++;
	for (; i < (int)str.length(); i++)
		if (!std::isdigit(str[i]))
			return false;
	return true;
}

bool	isFloat(std::string const &str) {
	int	comma = 0;
	int		i = 0;

	if (str.find('.') == std::string::npos || str[str.length() - 1] != 'f' || str.find('.') == 0
		|| str.find('.') == str.length() - 2)
		return false;
	if (str[i] == '-' || str[i] == '+')
		i++;
	for (; i < (int)str.length() - 1; i++) {
		if (str[i] == '.')
			comma++;
		if ((!std::isdigit(str[i]) && str[i] != '.') || comma > 1)
			return false;
	}
	return true;
}

bool	isDouble(std::string const &str) {
	int	comma = 0;
	int		i = 0;

	if (str.find('.') == std::string::npos || str.find('.') == 0
		|| str.find('.') == str.length() - 1)
		return false;
	if (str[i] == '-' || str[i] == '+')
		i++;
	for (; i < (int)str.length(); i++) {
		if (str[i] == '.')
			comma++;
		if ((!std::isdigit(str[i]) && str[i] != '.') || comma > 1)
			return false;
	}
	return true;
}

bool	isLiteral(std::string const &str) {
	if (!str.compare("-inff") || !str.compare("+inff") || !str.compare("nanf")
		|| !str.compare("-inf") || !str.compare("+inf") || !str.compare("nan"))
		return true;
	return false;
}

bool	isOverflow(std::string const &str) {
	int	num = std::atoi(str.c_str());
	std::stringstream	stream;

	stream << num;
	std::string	converted;
	stream >> converted;
	return str.compare(converted);
}

/* ------------------------------ print_func ------------------------------ */

void	ScalarConverter::printChar(void) {
	if (isLiteral(_str) || _impossible || _int >= 127 || !std::isprint(_char))
		std::cout << "Impossible";
	else if (!std::isprint(_int))
		std::cout << "Non Displayable";
	else
		std::cout << "'" << getChar() << "'";
	std::cout << std::endl;
}

void	ScalarConverter::printInt(void) {
	if (isLiteral(_str) || _impossible)
		std::cout << "Impossible";
	else if (isOverflow(_str))
		std::cout << "Overflow";
	else
		std::cout << _int;
	std::cout << std::endl;
}

void	ScalarConverter::printFloat(void) {
	if (!_str.compare("nan") || !_str.compare("nanf"))
		std::cout << "nanf";
	else if (!_str.compare("+inf") || !_str.compare("+inff"))
		std::cout << "+inff";
	else if (!_str.compare("-inf") || !_str.compare("-inff"))
		std::cout << "-inff";
	else if (_impossible)
		std::cout << "Impossible";
	else {
		std::cout << _float;
		if (!(_float - static_cast<int>(_float))) // if no comma
			std::cout << ".0";
		std::cout << "f";
	}
	std::cout << std::endl;
}

void	ScalarConverter::printDouble(void) {
	if (!_str.compare("nan") || !_str.compare("nanf"))
		std::cout << "nan";
	else if (!_str.compare("+inf") || !_str.compare("+inff"))
		std::cout << "+inf";
	else if (!_str.compare("-inf") || !_str.compare("-inff"))
		std::cout << "-inf";
	else if (_impossible)
		std::cout << "Impossible";
	else {
		std::cout << _double;
		if (!(_double - static_cast<int>(_double))) // if no comma
			std::cout << ".0";
	}
	std::cout << std::endl;
}

void	ScalarConverter::printType(void) {
	switch (_type) {
		case 0 :
			std::cout << "NONE";
			break ;
		case 1 :
			std::cout << "CHAR";
			break ;
		case 2 :
			std::cout << "INT";
			break ;
		case 3 :
			std::cout << "FLOAT";
			break ;
		case 4 :
			std::cout << "DOUBLE";
			break ;
		case 5 :
			std::cout << "LITERAL";
			break ;
	}
	std::cout << std::endl;
}