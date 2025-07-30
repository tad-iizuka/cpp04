/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 04:07:02 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/30 17:36:18 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::makeSound( void ) const {
	Log::a(F, L, C_Y, "makeSound", "[" + type + "]", "meow meow");
}

void Cat::setIdeas(unsigned int index, std::string idea) {
	_brain->setValue(index, idea);
	Log::a(F, L, C_Y, "setIdeas", "[" + Log::itoa(index) + "]", "[" + idea + "]");
}

const std::string Cat::getIdeas(unsigned int index) const {
	Log::a(F, L, C_Y, "getValue", "[" + Log::itoa(index) + "]", "[" + _brain->getValue(index) + "]");
	return _brain->getValue(index);
}

Cat::Cat( void ) : Animal("Cat") {
	try {
		_brain = new Brain();
	} catch (std::bad_alloc& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		_brain = NULL;
	}
	Log::a(F, L, C_B, "constructed.");
}

Cat::Cat( const Cat& src ) : Animal(src) {
	type = src.getType();
	_brain = new Brain(*src._brain);
	Log::a(F, L, C_B, "[" + src.getType() + "] copied.");
}

Cat& Cat::operator=( const Cat& rhs ) {
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		delete _brain;
		_brain = new Brain(*rhs._brain);
		Log::a(F, L, C_B, "[" + rhs.getType() + "] assignation operator copied.");
	}
	return *this;
}

Cat::~Cat( void ) {
	if (_brain != NULL)
		delete _brain;
	Log::a(F, L, C_R, "[" + getType() + "] destructed.");
}
