/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:32:07 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/19 10:43:04 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "wrongCat.hpp"

int	main(void)
{
	Animal	*tab[10];

	for (int i = 0; i < 5; i++)
		tab[i] = new Dog();
	for (int i = 5; i < 10; i++)
		tab[i] = new Cat();

	for (int i = 0; i < 10; i++)
		delete tab[i];

	std::cout << "-------------------------------------------------" << std::endl;

	Dog	dog1 = Dog();

	std::cout << "dog1: " << std::endl;
	dog1.setIdeas("I'm gonna burn the world", 4);
	std::cout << dog1.getIdeas(4) << std::endl;

	Dog dog2 = Dog(dog1);

	std::cout << "dog2: " << std::endl;
	std::cout << dog2.getIdeas(4) << std::endl;

	std::cout << "-------------------------------------------------" << std::endl;

	Cat	cat1 = Cat();

	std::cout << "cat1: " << std::endl;
	cat1.setIdeas("I want to kill everyone", 69);
	std::cout << cat1.getIdeas(69) << std::endl;

	Cat cat2 = Cat(cat1);

	std::cout << "cat2: " << std::endl;
	std::cout << cat2.getIdeas(69) << std::endl;

	return 0;
}