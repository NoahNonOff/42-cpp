/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:32:59 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/09/09 15:14:45 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <list>
# include <stack>
# include <deque>

template<typename T> class MutantStack : public std::stack<T> {
	public:

		MutantStack(void) {};
		~MutantStack(void) {};

		MutantStack(MutantStack const &src) { *this = src; }
		MutantStack&    operator=(MutantStack const &src) {
				
			std::stack<T>::operator=(src);
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator	iterator;

		iterator	begin(void) { return this->c.begin(); }
		iterator	end(void) { return this->c.end(); }
};

#endif