/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 07:58:36 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/30 12:05:56 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include <cstdlib>

int main( void )
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
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	me->unequip(1);
	me->unequip(10);
	me->unequip(-1);
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(10, *bob);
	me->use(-1, *bob);

	MateriaSource one;
	one.learnMateria(new Ice());
	one.learnMateria(new Cure());
	MateriaSource two(one);

	MateriaSource temp;
	temp = one;

	delete bob;
	delete me;
	delete src;
	Log::a(__FILE__, __LINE__, C_W, "return (EXIT_SUCCESS);");
	return (EXIT_SUCCESS);
}
