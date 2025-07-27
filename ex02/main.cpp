/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 03:38:59 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/28 06:36:50 by tiizuka          ###   ########.fr       */
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
	std::cout << "const Animal* j = new Dog();" << std::endl;
	const Animal* j = new Dog();
	std::cout << "const Animal* i = new Cat();" << std::endl;
	const Animal* i = new Cat();
	std::cout << "const Dog* n = new Dog();" << std::endl;
	const Dog* n = new Dog();
	std::cout << "const Cat* m = new Cat();" << std::endl;
	const Cat* m = new Cat();

	std::cout << "delete j;" << std::endl;
	delete j;
	std::cout << "delete i;" << std::endl;
	delete i;
	std::cout << "delete n;" << std::endl;
	delete n;
	std::cout << "delete m;" << std::endl;
	delete m;

	std::cout << "Dog a;" << std::endl;
	Dog a;
	std::cout << "a.setIdeas(0, \"first\");" << std::endl;
	a.setIdeas(0, "first");
	std::cout << "Dog aa(a);" << std::endl;
	Dog aa(a);
	std::cout << "aa.getIdeas(0);" << std::endl;
	aa.getIdeas(0);
	std::cout << "aa.setIdeas(0, \"second\");" << std::endl;
	aa.setIdeas(0, "second");
	std::cout << "a.getIdeas(0);" << std::endl;
	a.getIdeas(0);
	std::cout << "aa.getIdeas(0);" << std::endl;
	aa.getIdeas(0);

	std::cout << "Cat b;" << std::endl;
	Cat b;
	std::cout << "b.setIdeas(99, \"first\");" << std::endl;
	b.setIdeas(99, "first");
	std::cout << "Cat bb(b);" << std::endl;
	Cat bb(b);
	std::cout << "bb.getIdeas(99);" << std::endl;
	bb.getIdeas(99);
	std::cout << "bb.setIdeas(99, \"second\");" << std::endl;
	bb.setIdeas(99, "second");
	std::cout << "b.getIdeas(99);" << std::endl;
	b.getIdeas(99);
	std::cout << "bb.getIdeas(99);" << std::endl;
	bb.getIdeas(99);

	std::cout << "return (EXIT_SUCCESS);" << std::endl;
	return (EXIT_SUCCESS);
}
