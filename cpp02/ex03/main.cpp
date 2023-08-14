/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 06:32:07 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/14 10:07:12 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

	int main(void) {
	    Point   A(0.0125f, 0.0128f);
	    Point   B(20.0f, 0.0f);
	    Point   C(10.025f, 30.0f);
	    Point   P(10.0f, 15.0f);

	    if (bsp(A, B, C, P))
	        std::cout << "Inside" << std::endl;
	    else
	        std::cout << "Not Inside" << std::endl;
	    return 0;
	}
