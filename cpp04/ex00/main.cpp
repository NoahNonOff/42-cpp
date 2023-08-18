/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:32:07 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/18 11:15:27 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "wrongCat.hpp"

int	main(void)
{
	Animal	*a = new Animal();
	Cat		*chat = new Cat();
	Dog		*chien = new Dog();

	std::cout << "--------------------------------------" << std::endl;

	std::cout << "animal sound: ";
	a->makeSound();
	std::cout << "cat sound: ";
	chat->makeSound();
	std::cout << "dog sound: ";
	chien->makeSound();

	std::cout << "--------------------------------------" << std::endl;

	delete a;
	delete chat;
	delete chien;

	std::cout << "--------------------------------------" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!

	std::cout << j->getType() << " " << std::endl;
	j->makeSound();

	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "--------------------------------------" << std::endl;

	const wrongAnimal* x = new wrongAnimal();
	const wrongAnimal* z = new wrongCat();

	std::cout << x->getType() << " " << std::endl;
	x->makeSound();

	std::cout << z->getType() << " " << std::endl;
	z->makeSound();

	delete x;
	delete z;

	return 0;
}