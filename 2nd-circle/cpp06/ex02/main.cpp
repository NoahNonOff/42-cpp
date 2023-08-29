/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:24:32 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/29 15:58:30 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "letter.hpp"

int main(void)
{
    Base*   test = generate(); std::cout << std::endl;

    std::cout << "test* = "; identify(test);
    std::cout << "test& = "; identify(*test);

    delete test;

    return 0;
}