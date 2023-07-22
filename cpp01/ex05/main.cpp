/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:28:26 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/22 17:32:16 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int	main(void)
{
	int		n;
	Harl	csc;

	n = 5;
	for (int i = 0; i < n; i++)
		csc.complain("DEBUG");
	for (int i = 0; i < n; i++)
		csc.complain("INFO");
	for (int i = 0; i < n; i++)
		csc.complain("WARNING");
	for (int i = 0; i < n; i++)
		csc.complain("ERROR");
	for (int i = 0; i < n; i++)
		csc.complain("bad word");
	return 0;
}
