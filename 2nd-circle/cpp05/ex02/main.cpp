/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:09:22 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/24 14:09:36 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	std::cout << "-------------------- form 1 --------------------" << std::endl;
	ShrubberyCreationForm	form1("re-Forest-Plan", "garden");
	Bureaucrat				bob("bob", 36);

	std::cout << form1;
	bob.executeForm(form1);
	bob.signForm(form1);
	std::cout << form1;
	bob.executeForm(form1);

	std::cout << "-------------------- form 2 --------------------" << std::endl;
	ShrubberyCreationForm	form2("Gerboise-blanche", "desert");
	Bureaucrat				charle("charle", 144);

	std::cout << form2;
	charle.executeForm(form2);
	charle.signForm(form2);
	std::cout << form2;
	charle.executeForm(form2);

	std::cout << "-------------------- form 3 --------------------" << std::endl;
	RobotomyRequestForm	form3("robotomised-Plan", "githubGuy");
	Bureaucrat				sam("sam", 36);

	std::cout << form3;
	sam.executeForm(form3);
	sam.signForm(form3);
	std::cout << form3;
	sam.executeForm(form3);

	std::cout << "-------------------- form 4 --------------------" << std::endl;
	PresidentialPardonForm	form4("forgive-Plan", "Anael");
	Bureaucrat				odin("odin", 3);

	std::cout << form4;
	odin.executeForm(form4);
	odin.signForm(form4);
	std::cout << form4;
	odin.executeForm(form4);

	return 0;
}