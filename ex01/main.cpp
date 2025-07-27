/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 03:38:59 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/27 21:38:30 by tiizuka          ###   ########.fr       */
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

	delete j;
	delete i;

	// Dog a;
	// Dog aa(a);
	Cat b;
	b.brain->setIdeas(0, "abc");
	std::cout << b.getIdeas(0) << std::endl;
	Cat bb(b);
	std::cout << bb.getIdeas(0) << std::endl;

	return (EXIT_SUCCESS);
}
