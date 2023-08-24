/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:12:21 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/24 12:41:25 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AFORM_HPP
# define AFORM_HPP

# include <fstream>
# include <sstream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signature;
		int					_toSign;
		int					_toExecute;

	public:
		AForm();
		AForm(const AForm &src);
		AForm(std::string name, int toSign, int toExecute);
		
		virtual ~AForm();
		AForm	&operator=(AForm const &src);

		virtual void	beSigned(Bureaucrat const &bob);
		virtual void	execute(Bureaucrat const &bob) = 0;

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

std::ostream &operator<<(std::ostream &o, AForm const &i);

#endif