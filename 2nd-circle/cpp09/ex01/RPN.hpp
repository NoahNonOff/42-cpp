/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:17:26 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/09/14 13:20:40 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>

typedef enum { None, Add, Less, Div, Mult }	OP;

class	rpn {
	private:
		std::stack<int>	_stack;

	public:
		rpn();
		~rpn();
		rpn(rpn const &other);
		rpn	&operator=(rpn const &other);

		std::stack<int>	getStack(void) const;

		void	addNum(int const &n);
		void	do_operation(OP type);
		int		getResult(void);
};

bool	checkArg(std::string const &arg);
int		calculate(std::string const &arg);

#endif