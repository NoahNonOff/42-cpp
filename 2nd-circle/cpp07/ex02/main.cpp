/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:15:05 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/09/01 12:29:35 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define SIZE 10

template <class T> std::ostream &operator<<(std::ostream& o, const Array<T> &arr) {
	for (unsigned i = 0; i < arr.size(); i++)
		o << arr[i] << ((i == arr.size() - 1)?"\n":" ");
	return o;
}

/* ------------------------------ main ------------------------------ */

int	main(void)
{
	Array<float>	test;

	Array<int>	intArray1(SIZE);
	Array<int>	intArray2(SIZE - 5);

	for (unsigned i = 0; i < intArray1.size(); i++)
		intArray1[i] = i * 2;

	std::cout << "Int Array 1: " << intArray1 << std::endl;

	std::cout << "intArray2 = intArray1" << std::endl;
	intArray2 = intArray1;

	std::cout << "int Array 2: " << intArray2 << std::endl;

	try {
		std::cout << "Valid index: intArray1[" << 5 << "]: " << intArray1[5] << std::endl;
		std::cout << "Invalid index: intArray1[" << SIZE << "]: " << intArray1[SIZE] << std::endl;
	} catch (Array<int>::InvalidIndex &error) {
		std::cout << "Error: " << error.what() << std::endl;
	}

	std::cout << "\nintArray1[3] = 0" << std::endl;
	intArray1[3] = 0;
	std::cout << "int Array 1: " << intArray1 << "int Array 2: " << intArray2;

	return 0;
}