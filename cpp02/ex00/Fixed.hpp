/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:43:41 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/23 12:05:14 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fix {
	private:
		int					_num;
		const static int	_nBits;
	public:
		Fix(void); // constructor
		Fix(Fix &t); // copy constructor
		~Fix(void); // destructor
		Fix 	operator=(const Fix& t); // affection operator overload

		int		getRawBits(void);
		void	setRawBits(int const raw);
}

#endif
