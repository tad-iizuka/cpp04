/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 04:07:28 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/30 17:53:27 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog::makeSound( void ) const {
	Log::a(F, L, C_Y, "makeSound", "[" + type + "]", "bark bark");
}

void Dog::setIdea(unsigned int index, std::string idea) {
	if (_brain)
	{
		_brain->setValue(index, idea);
		Log::a(F, L, C_Y, "setIdea", "[" + Log::itoa(index) + "]", "[" + idea + "]");
	}
}

const std::string Dog::getIdea(unsigned int index) const {
	if (_brain)
	{
		Log::a(F, L, C_Y, "getValue", "[" + Log::itoa(index) + "]", "[" + _brain->getValue(index) + "]");
		return _brain->getValue(index);
	}
	return "";
}

Dog::Dog( void ) : Animal("Dog") {
	try {
		_brain = new Brain();
	} catch (std::bad_alloc& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		_brain = NULL;
	}
	Log::a(F, L, C_B, "constructed.");
}

Dog::Dog( const Dog& src ) : Animal(src) {
	type = src.getType();
	_brain = new Brain(*src._brain);
	Log::a(F, L, C_B, "[" + src.getType() + "] copied.");
}

Dog& Dog::operator=( const Dog& rhs ) {
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		delete _brain;
		_brain = new Brain(*rhs._brain);
		Log::a(F, L, C_B, "[" + rhs.getType() + "] assignation operator copied.");
	}
	return *this;
}

Dog::~Dog( void ) {
	if (_brain != NULL)
		delete _brain;
	Log::a(F, L, C_R, "[" + getType() + "] destructed.");
}
