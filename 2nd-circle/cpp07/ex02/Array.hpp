/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:16:26 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/09/01 12:25:45 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <cstdlib>

template <class T> class Array {
	private:
		T				*_array;
		unsigned int	_sz;
	public:
		Array() : _array(new T()), _sz(0) {};
		~Array() { delete [] _array; };

		Array(const unsigned int n) : _array(new T[n]), _sz(n) {};

		Array(Array const &src) : _array(new T[src.size()]), _sz(src._sz) {
		for (unsigned i = 0; i < _sz; i++)
			_array[i] = src._array[i];
		};

		Array	&operator=(Array const &src) {
			if (this != &src) {
				delete [] this->_array; // secure (no leaks)
				this->_array = new T[src.size()];
				this->_sz = src._sz;
				for (unsigned i = 0; i < src.size(); i++) {
					this->_array[i] = src._array[i];
				}
			}
			return *this;
		};

		T&	operator[](unsigned int n) const {
			if (n >= _sz)
				throw Array::InvalidIndex();
			return _array[n];
		};

		unsigned int	size(void) const { return _sz; };

		class InvalidIndex : public std::exception {
			public:
				virtual const char *what() const throw() { return "Invalid index"; };
		};
};

template <class T> std::ostream &operator<<(std::ostream& o, const Array<T> &arr);

#endif