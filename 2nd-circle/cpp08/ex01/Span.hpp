/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:32:59 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/09/09 14:08:11 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <list>
# include <algorithm>
# include <exception>
# include <cstdarg>

class Span {
	private:
		std::list<int>	_lst;
		unsigned int	_N;

		Span(void); // not to use

	public:
		Span(unsigned int N);
		Span(Span const &src);
		~Span(void);

		Span	&operator=(Span const &src);

		void	addNumber(int num);
		void	addnNumber(int nb_elem, ...);

		unsigned int	longestSpan(void);
		unsigned int	shortestSpan(void);
};

#endif