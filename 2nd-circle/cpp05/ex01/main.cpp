/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 06:32:07 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/09/11 10:48:13 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main(void)
{
	std::cout << "------------ form1 ------------" << std::endl;
	try {
		Form	form1("form1", 32, 0);
	} catch (Form::GradeTooLowException &error) {
		std::cout << error.what() << std::endl;
	} catch (Form::GradeTooHighException &error) {
		std::cout << error.what() << std::endl;
	}

	std::cout << "------------ form2 ------------" << std::endl;

	Form	form2("world domination's plan", 25, 74);
	Bureaucrat	jean("jean", 3);

	std::cout << jean << form2;
	form2.beSigned(jean);
	std::cout << form2;

	std::cout << "------------ form3 ------------" << std::endl;

	Form	form3("useless-plan", 25, 74);
	Bureaucrat	charle("charle", 124);

	std::cout << charle << form3;
	try {
		form3.beSigned(charle);
	} catch (Form::GradeTooLowException &error) {
		std::cout << error.what() << std::endl;
	}
	std::cout << form3;

	std::cout << "------------ form4 ------------" << std::endl;

	Form	form4("maki-new-price", 25, 74);
	Bureaucrat	joseph("joseph", 124);

	std::cout << joseph << form4;
	joseph.signForm(form4);
	std::cout << form4;

	std::cout << "------------ form5 ------------" << std::endl;

	Form	form5("ikea-construction-form", 25, 74);
	Bureaucrat	michel("michel", 3);

	std::cout << michel << form5;
	michel.signForm(form5);
	std::cout << form5;

	michel.signForm(form5);
	std::cout << form5;

	return 0;
}