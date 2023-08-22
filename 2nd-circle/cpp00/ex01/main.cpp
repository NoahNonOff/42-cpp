/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 06:32:07 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/22 12:45:09 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	enzo("enzo", 5);
	Bureaucrat	nulass("nulass", 300);
	Bureaucrat	lowGuy("low guy", 146);

	for (int i = 0; i < 5; i++) {
		enzo.upGrade();
		std::cout << enzo;
	}

	for (int i = 0; i < 5; i++) {
		lowGuy.downGrade();
		std::cout << lowGuy;
	}

	std::cout << "----------------------------------------" << std::endl;

	Form	form1("world domination's plan", 200, 3);

	std::cout << form1;

	return 0;
}
