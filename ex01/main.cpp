/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 03:38:59 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/30 17:53:23 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <cstdlib>

int main( void )
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Dog* n = new Dog();
	const Cat* m = new Cat();

	delete j;
	delete i;
	delete n;
	delete m;

	Dog a;
	a.setIdea(0, "first");
	Dog aa(a);
	aa.getIdea(0);
	aa.setIdea(0, "second");
	a.getIdea(0);
	aa.getIdea(0);

	Cat b;
	b.setIdea(99, "first");
	Cat bb(b);
	bb.getIdea(99);
	bb.setIdea(99, "second");
	b.getIdea(99);
	bb.getIdea(99);

	Log::a(F, L, C_W, "return (EXIT_SUCCESS);");
	return (EXIT_SUCCESS);
}
