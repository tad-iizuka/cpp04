/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 04:07:02 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/27 21:46:01 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::makeSound( void ) const {
	std::cout << C_M << "meow meow." << C_CLR << std::endl;
}

void Cat::setIdeas(unsigned int index, std::string idea) {
	brain->setValue(index, idea);
}

const std::string Cat::getIdeas(unsigned int index) const {
	return brain->getValue(index);
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
	type = src.getType();
	brain = new Brain(*src.brain);
	std::cout << C_B << "Cat " << src.getType() <<  " copied."
		<< C_CLR << std::endl;
}

Cat& Cat::operator=( const Cat& rhs ) {
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		delete brain;
		brain = new Brain(*rhs.brain);
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
