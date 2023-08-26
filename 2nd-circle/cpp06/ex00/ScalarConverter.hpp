/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:50:05 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/26 17:15:47 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERT_HPP
# define SCALAR_CONVERT_HPP

# include <iostream>
# include <string>

typedef enum e_type { CHAR, INT, FLOAT, DOUBLE, }	TYPE; 

class ScalarConverter
{
	private:
		std::string	_literal;

	public:
		ScalarConverter();
		ScalarConverter(const std::string literal);
		~ScalarConverter();

		ScalarConverter(const ScalarConverter &src);
		ScalarConverter	&operator=(ScalarConverter const &src);

		std::string	getLiteral(void) const;
};

std::ostream	&operator<<(std::ostream &o, ScalarConverter const &i);

#endif