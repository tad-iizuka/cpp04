/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 04:07:02 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/27 19:53:54 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::makeSound( void ) const {
	std::cout << C_M << "meow meow." << C_CLR << std::endl;
}

Cat::Cat( void ) : Animal("Cat") {
	try {
		brain = new Brain();
	} catch (std::bad_alloc& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		brain = NULL;
	}
	std::cout << C_B << "Cat constructed."
		<< C_CLR << std::endl;
}

Cat::Cat( const Cat& src ) : Animal(src) {
	Brain *temp;

	try {
		temp = new Brain();
	} catch (std::bad_alloc& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		temp = NULL;
	}
	if (temp != NULL)
	{
		for (int i = 0; i<SIZE; ++i)
			temp[i] = src.brain[i];
		delete brain;
		brain = temp;
	}
	type = src.getType();
	std::cout << C_B << "Cat " << src.getType() <<  " copied."
		<< C_CLR << std::endl;
}

Cat& Cat::operator=( const Cat& rhs ) {
	Brain *temp;

	if (this != &rhs)
	{
		try {
			temp = new Brain();
		} catch (std::bad_alloc& e) {
			std::cerr << "Error: " << e.what() << std::endl;
			temp = NULL;
		}
		if (temp != NULL)
		{
			for (int i = 0; i<SIZE; ++i)
				temp[i] = rhs.brain[i];
			delete brain;
			brain = temp;
		}
		Animal::operator=(rhs);
		std::cout << C_B << "Cat " << rhs.getType()
			<< " assignation operator copied." << C_CLR << std::endl;
	}
	return *this;
}

Cat::~Cat( void ) {
	if (brain != NULL)
		delete brain;
	std::cout << C_R << "Cat " << getType() << " destructed."
		<< C_CLR << std::endl;
}
