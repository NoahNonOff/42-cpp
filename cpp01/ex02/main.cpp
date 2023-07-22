/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:27:24 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/20 22:33:50 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string		str	= "HI THIS IS BRAIN";
	std::string&	ref = str;
	std::string		*ptr = &str;

	std::cout << "str: " << std::hex << &str << std::endl;
	std::cout << "ref: " << std::hex << &ref << std::endl;
	std::cout << "ptr: " << std::hex << &ptr << std::endl;

	std::cout << "==========================" << std::endl;

	std::cout << "str: " << str << std::endl;
	std::cout << "ref: " << ref << std::endl;
	std::cout << "ptr: " << *ptr << std::endl;
	return 0;
}
