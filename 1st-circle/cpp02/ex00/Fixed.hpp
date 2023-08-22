/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:43:41 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/27 12:52:26 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed {
	private:
		int					_num;
		const static int	_nBits = 8;
	public:
		Fixed(void); // constructor
		Fixed(Fixed &t); // copy constructor
		~Fixed(void); // destructor
		Fixed 	&operator=(const Fixed& t); // affection operator overload

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
