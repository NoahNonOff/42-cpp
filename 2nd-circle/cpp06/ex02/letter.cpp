/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   letter.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:25:45 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/29 15:53:25 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "letter.hpp"

Base::~Base() {}

Base*	generate(void) {
	srand(time(NULL));
	int		res = std::rand() % 3;

	if (!res) {
		std::cout << "type A created" << std::endl;
		return (new A);
	}
	else if (res == 1) {
		std::cout << "type B created" << std::endl;
		return (new B);
	}
	std::cout << "type C created" << std::endl;
	return (new C);
}

// dynamic_cast -> NULL if not the good class
void	identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "type: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "type: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "type: C" << std::endl;
	else
		std::cout << "type: unknown" << std::endl;
}

void    identify(Base& p) {

	/* test for A */
	try
	{
		A&	a = dynamic_cast<A&>(p);
		std::cout << "type: A" << std::endl;
		(void)a;
		return ;
	}
	catch (const std::exception &error) {}

	/* test for B */
	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << "type: B" << std::endl;
		(void)b;
		return ;
	}
	catch (const std::exception &error) {}

	/* test for C */
	try
	{
		C& c = dynamic_cast< C& >( p );
		std::cout << "type: C" << std::endl;
		(void)c;
		return ;
	}
	catch (const std::exception &error) {}

	std::cout << "type: unknown" << std::endl;
}
