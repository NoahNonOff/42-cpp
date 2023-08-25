/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:41:58 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/25 10:22:07 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern(void); // constructor
		Intern(Intern &src); // copy constructor
		~Intern(void); // destructor
		Intern 	&operator=(const Intern& src); // affection operator overload

		void	*makeForm(std::string const &name, std::string const &target);
};

#endif