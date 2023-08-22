/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:12:21 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/22 13:19:15 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

# define HIGH "Form::GradeTooHighException"
# define LOW "Form::GradeTooLowException"

class Form
{
	private:
		const std::string	_name;
		bool				_signature;
		int					_toSign;
		int					_toExecute;

	public:
		Form();
		Form(const Form &src);
		Form(std::string name, int toSign, int toExecute);
		
		~Form();
		Form	&operator=(Form const &src);

		void	beSigned(void); // check toSign
		void	signForm(void); // check toExecute

		std::string	getName(void) const;
		bool		getSignature(void) const;
		int			getToSign(void) const;
		int			getToExecute(void) const;
};

std::ostream &operator<<(std::ostream &o, Form const &i);

#endif