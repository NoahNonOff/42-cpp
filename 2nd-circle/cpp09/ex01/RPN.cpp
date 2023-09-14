/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:17:23 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/09/14 13:21:31 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/* ================================ class ================================ */

std::stack<int>	rpn::getStack(void) const { return this->_stack; }

rpn::rpn() {}

rpn::~rpn() {}

rpn::rpn(rpn const &other) { *this = other; }

rpn	&rpn::operator=(rpn const &other) {
	if (this != &other) {
		this->_stack = other.getStack();
	}
	return *this;
}

void	rpn::addNum(int const &n) { _stack.push(n); }

void	rpn::do_operation(OP type) {

	if (_stack.size() < 2)
		throw std::runtime_error("use of an operator when the stack size is less than 2");

	int	numTop = _stack.top();
	_stack.pop();
	int	numBott = _stack.top();
	_stack.pop();

	switch (type) {
		case Add:
			_stack.push(numBott + numTop);
			break ;
		case Less:
			_stack.push(numBott - numTop);
			break ;
		case Div:
			if (numTop == 0)
				throw std::runtime_error("division by zero");
			_stack.push(numBott / numTop);
			break ;
		case Mult:
			_stack.push(numBott * numTop);
			break ;
		default:
			break ;
	}
}

int	rpn::getResult(void) {

	if (_stack.size() != 1)
		throw std::runtime_error("the stack size is different than 1");
	int	ret = _stack.top();
	_stack.pop();
	return ret;
}

/* ================================ funct ================================ */

OP	findOP(char c) {

	switch (c) {
		case '+':
			return Add;
			break ;
		case '-':
			return Less;
			break ;
		case '*':
			return Mult;
			break ;
		case '/':
			return Div;
			break ;
		default:
			return None;
			break ;
	}
	return None;
}

bool	checkArg(std::string const &arg) {

	for (int i = 0; i < (int)arg.size(); i++) {
		if (i!=0 && i%2)
			if (arg[i] != ' ')
				return false;
		if (i==0 || !(i%2))
			if (!isdigit(arg[i]) && !findOP(arg[i]))
				return false;
	}
	return true;
}

int	calculate(std::string const &arg) {

	rpn	stk;
	for (int i = 0; i < (int)arg.size(); i++) {
		if (i!=0 && i%2)
			continue ;
		if (i==0 || !(i%2)) {
			if (isdigit(arg[i]))
				stk.addNum(arg[i] - '0');
			if (findOP(arg[i]))
				stk.do_operation(findOP(arg[i]));
		}
	}
	return stk.getResult();
}