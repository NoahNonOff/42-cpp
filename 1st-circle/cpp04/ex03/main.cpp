/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:50:56 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/08/19 16:36:45 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateria.hpp"
#include "MateriaSource.hpp"
#include "ice.hpp"
#include "cure.hpp"

int main()
    {
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    AMateria    *trash;
    ICharacter* Andrea = new Character("Andrea");

    trash = me->getMateria(0);
    me->unequip(0);

    me->use(0, *Andrea);
    me->use(1, *Andrea);

    delete bob;
    delete me;
    delete src;
    delete Andrea;
    delete trash;

    return 0;
}