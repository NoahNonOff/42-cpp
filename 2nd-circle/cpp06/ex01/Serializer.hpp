/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:21:51 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/29 14:46:31 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <string>
# include <iostream>
# include <stdint.h>

struct Data
{
	std::string	dest;
	int			distance;
};

/* static */ class Serializer
{
	public:
		Serializer();
		~Serializer();

		Serializer(const Serializer &src);
		Serializer	&operator=(Serializer const &src);

		static uintptr_t	serialize(Data *ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif