/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:32:48 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/09/09 15:14:32 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutanStack.hpp"

int	main(void)
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "mstack.top(): " << mstack.top() << std::endl;

	mstack.pop();
	std::cout << "[mstack.pop()]" << std::endl;

	std::cout << "mstack.size(): " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	std::cout << "print mstack:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "=======================================" << std::endl;

	std::list<int>	lst;

	lst.push_back(5);
	lst.push_back(17);

	std::cout << "lst.begin(): " << *lst.begin() << std::endl;

	std::cout << "lst.size(): " << lst.size() << std::endl;

	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	//[...]
	lst.push_back(0);

	std::list<int>::iterator itLST = lst.begin();
	std::list<int>::iterator iteLST = lst.end();

	++itLST;
	--itLST;
	std::cout << "print lst:" << std::endl;
	while (itLST != iteLST)
	{
		std::cout << *itLST << std::endl;
		++itLST;
	}
	std::list<int> p(lst);

	return 0;
}