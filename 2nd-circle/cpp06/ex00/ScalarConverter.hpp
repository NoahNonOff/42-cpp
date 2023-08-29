/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:50:05 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/29 14:00:32 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERT_HPP
# define SCALAR_CONVERT_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <stdlib.h>

typedef enum e_type { NONE, CHAR, INT, FLOAT, DOUBLE, LITERAL }	TYPE; 

/* static */ class ScalarConverter
{
	private:
		static int			_int;
		static char			_char;
		static float		_float;
		static double		_double;

		static bool			_impossible;

		static std::string	_str;
		static TYPE			_type;

	public:
		ScalarConverter();
		~ScalarConverter();

		ScalarConverter(const ScalarConverter &src);
		ScalarConverter	&operator=(ScalarConverter const &src);

		static std::string	getStr(void) /* const */;
		static void	setStr(std::string const &str);

		static char	getChar(void) /* const */;
		static void	setChar(char const &n);

		static int		getInt(void) /* const */;
		static void	setInt(int const &n);

		static float	getFloat(void) /* const */;
		static void	setFloat(float const &n);

		static double	getDouble(void) /* const */;
		static void	setDouble(double const &n);

		static TYPE	getType(void) /* const */;
		static void	setType(void);

		static void	convert(void);
		static bool	isImpossible(void);

		static void	printChar(void);
		static void	printInt(void);
		static void	printFloat(void);
		static void	printDouble(void);
		static void	printType(void);

		class ConvertException : std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &o, ScalarConverter const &i);

bool	isChar(std::string const &str);
bool	isInt(std::string const &str);
bool	isFloat(std::string const &str);
bool	isDouble(std::string const &str);
bool	isLiteral(std::string const &str);
bool	isOverflow(std::string const &str);

#endif