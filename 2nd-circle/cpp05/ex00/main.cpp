/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 06:32:07 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/23 16:27:32 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	enzo("enzo", 5);
	Bureaucrat	lowGuy("low guy", 146);

	std::cout << "------------ nulass ------------" << std::endl;
	try {
		Bureaucrat	nulass("nulass", -25);
	}
	catch (Bureaucrat::GradeTooLowException &error) {
		std::cout << error.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &error) {
		std::cout << error.what() << std::endl;
	}

	std::cout << "------------- enzo -------------" << std::endl;
	for (int i = 0; i < 5; i++) {
		try {
			enzo.upGrade();
		} catch (Bureaucrat::GradeTooHighException &error) {
			std::cout << error.what() << std::endl;
			break ;
		}
		std::cout << enzo;
	}

	std::cout << "------------ lowGuy ------------" << std::endl;
	for (int i = 0; i < 5; i++) {
		try {
			lowGuy.downGrade();
		} catch (Bureaucrat::GradeTooLowException &error) {
			std::cout << error.what() << std::endl;
			break ;
		}
		std::cout << lowGuy;
	}

	std::cout << "------------ crash -------------" << std::endl;
	std::cout << "Don't catch exception cause an abort ( core dumped )" << std::endl;
	//Bureaucrat	crash("crash", 400);

	return 0;
}