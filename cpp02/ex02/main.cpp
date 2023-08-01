/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 06:32:07 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/01 15:08:46 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
int main ( void ) {


    return 0;
}
*/

int main(void) {
    Fixed a(10);
    Fixed b(42.127f);
    Fixed c(0);

    std::cout << a << " - " << b << " = " << a - b << std::endl;
    std::cout << b << " * " << a << " = " << b * a << std::endl;
    std::cout << b << " / " << a << " = " << b / a << std::endl;

    std::cout << b << " * " << c << " = " << b * c << std::endl;
    std::cout << b << " / " << c << " = " << b / c << std::endl;

    std::cout << a << " < " << b << " -> " << (a < b) << std::endl;
    std::cout << a << " > " << b << " -> " << (a > b) << std::endl;
    std::cout << a << " == " << b << " -> " << (a == b) << std::endl;
    std::cout << a << " != " << b << " -> " << (a != b) << std::endl;

    std::cout << "--------------------------------" << std::endl;
    std::cout << b << " -> [++n] = " << ++b << " (b = " << b << ")" << std::endl;
    std::cout << b << " -> [n++] = " << b++ << " (b = " << b << ")" << std::endl;
    std::cout << b << " -> [--n] = " << --b << " (b = " << b << ")" << std::endl;
    std::cout << b << " -> [n--] = " << b-- << " (b = " << b << ")" << std::endl;


    std::cout << "--------------------------------" << std::endl;
    Fixed           A;
    Fixed const     B( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << A << std::endl;
    std::cout << ++A << std::endl;
    std::cout << A << std::endl;
    std::cout << A++ << std::endl;
    std::cout << A << std::endl;
    std::cout << B << std::endl;

    std::cout << Fixed::max( A, B ) << std::endl;
    return 0;
}