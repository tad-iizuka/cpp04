/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 04:07:02 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/30 17:53:23 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::makeSound( void ) const {
	Log::a(F, L, C_Y, "makeSound", "[" + type + "]", "meow meow");
}

void Cat::setIdea(unsigned int index, std::string idea) {
	if (_brain)
	{
		_brain->setValue(index, idea);
		Log::a(F, L, C_Y, "setIdea", "[" + Log::itoa(index) + "]", "[" + idea + "]");
	}
}

const std::string Cat::getIdea(unsigned int index) const {
	if (_brain)
	{
		Log::a(F, L, C_Y, "getValue", "[" + Log::itoa(index) + "]", "[" + _brain->getValue(index) + "]");
		return _brain->getValue(index);
	}
	return "";
}

Cat::Cat( void ) : Animal("Cat") {
	_brain = new Brain();
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
