/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:03:06 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/24 14:06:25 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		std::string	_target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const &name, std::string const &target);
		~PresidentialPardonForm();

		void	execute(Bureaucrat const &bob);
};

#endif