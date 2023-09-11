/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:12:21 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/09/11 10:37:16 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signature;
		const int			_toSign;
		const int			_toExecute;

	public:
		Form();
		Form(const Form &src);
		Form(std::string name, int toSign, int toExecute);
		
		~Form();
		Form	&operator=(Form const &src);

		void	beSigned(Bureaucrat const &bob); // check toSign

		std::string	getName(void) const;
		bool		getSignature(void) const;
		int			getToSign(void) const;
		int			getToExecute(void) const;

		void		setName(std::string const newName);

		// exception class
		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, Form const &i);

#endif