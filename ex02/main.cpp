/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 03:38:59 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/30 15:27:48 by tiizuka          ###   ########.fr       */
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
	a.setIdeas(0, "first");
	Dog aa(a);
	aa.getIdeas(0);
	aa.setIdeas(0, "second");
	a.getIdeas(0);
	aa.getIdeas(0);

	Cat b;
	b.setIdeas(99, "first");
	Cat bb(b);
	bb.getIdeas(99);
	bb.setIdeas(99, "second");
	b.getIdeas(99);
	bb.getIdeas(99);

	Log::a(F, L, C_W, "return (EXIT_SUCCESS);");
	return (EXIT_SUCCESS);
}
