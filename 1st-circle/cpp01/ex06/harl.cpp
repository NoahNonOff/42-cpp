/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:48:19 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/22 20:35:46 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

void	Harl::debug(void) {
	std::cout << std::endl << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my \n7XL-double-cheese-triple";
	std::cout << "-pickle-special-ketchup burger.\nI really do !" << std::endl;
}

void	Harl::info(void) {
	std::cout << std::endl << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\n";
	std::cout << "You didn’t put enough bacon in my burger ! If you did,\n";
	std::cout << "I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void) {
	std::cout << std::endl << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I’ve been coming for years whereas you started working\n";
	std::cout << "here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << std::endl << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
    int 		i = 0;
    std::string	levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4 && levels[i].compare(level))
		i++;
	switch (i) {
		case	0:
			this->debug();
			__attribute__ ((fallthrough)); // remove fall through error
		case	1:
			this->info();
			__attribute__ ((fallthrough)); // remove fall through error
		case	2:
			this->warning();
			__attribute__ ((fallthrough)); // remove fall through error
		case	3:
			this->error();
			break ;
		default:
			std::cerr << "error: " << level << ": no matching level" << std::endl;
	}
}
