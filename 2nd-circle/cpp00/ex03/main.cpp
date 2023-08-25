/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:09:22 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/25 10:29:15 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	bob;
	void	*form;


	bob.makeForm("blabla", "target");

	form = bob.makeForm("shrubbery-creation", "garden");
	delete (ShrubberyCreationForm*)form;

	form = bob.makeForm("presidential-pardon", "white-house");
	delete (PresidentialPardonForm*)form;

	return 0;
}