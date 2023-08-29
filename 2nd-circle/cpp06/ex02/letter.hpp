/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   letter.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:25:43 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/29 15:46:33 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LETTER_HPP
# define LETTER_HPP

# include <iostream>
# include <cstdlib>

class Base {
	public:
		virtual ~Base();
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base*	generate(void);
void	identify(Base* p);
void    identify(Base& p);

#endif