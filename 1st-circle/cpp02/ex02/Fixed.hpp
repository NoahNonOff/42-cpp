/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:43:41 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/19 17:05:42 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed {
	private:
		int					_num;
		const static int	_nBits = 8;
		const static bool	_verbose = false;

	public:
		// constructor
		Fixed(void);
		Fixed(const int n);
		Fixed(const float n);

		Fixed(const Fixed &t); // copy constructor
		Fixed 	&operator=(const Fixed& t); // affection operator overload
		~Fixed(void); // destructor

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed   operator+(const Fixed &t) const;
		Fixed   operator-(const Fixed &t) const;
		Fixed   operator*(const Fixed &t) const;
		Fixed   operator/(const Fixed &t) const;

		bool	operator>(const Fixed &t) const;
		bool	operator<(const Fixed &t) const;
		bool	operator>=(const Fixed &t) const;
		bool	operator<=(const Fixed &t) const;
		bool	operator==(const Fixed &t) const;
		bool	operator!=(const Fixed &t) const;

		Fixed&   operator++(void);
		Fixed   operator++(int);
		Fixed&   operator--(void);
		Fixed   operator--(int);

		static Fixed	&min(Fixed &t1, Fixed &t2);
		static const Fixed	&min(const Fixed &t1, const Fixed &t2);
		static Fixed	&max(Fixed &t1, Fixed &t2);
		static const Fixed	&max(const Fixed &t1, const Fixed &t2);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &i);
int				ft_pow(int n, int pow);

#endif
