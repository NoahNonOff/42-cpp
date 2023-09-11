/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:23:10 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/29 14:46:33 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data        *data = new Data;
    uintptr_t   entier = Serializer::serialize(data);

    data->dest = "Reykjavik";
    data->distance = 362;

    std::cout << "Entier: " << entier << std::endl;
    std::cout << "Destination: " << Serializer::deserialize(entier)->dest << std::endl;
    std::cout << "Distance: " << Serializer::deserialize(entier)->distance << std::endl;

    delete data;

    return 0;
}