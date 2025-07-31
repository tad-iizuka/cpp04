/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 04:07:28 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/31 21:29:00 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog::makeSound( void ) const {
	Log::a(F, L, C_Y, "makeSound", "[" + type + "]", "bark bark");
}

void Dog::setIdea(unsigned int index, std::string idea) {
	Log::a(F, L, C_Y, "setIdea", "[" + Log::itoa(index) + "]", "[" + idea + "]");
	_brain->setValue(index, idea);
}

const std::string Dog::getIdea(unsigned int index) const {
	Log::a(F, L, C_Y, "getIdea", "[" + Log::itoa(index) + "]");
	return _brain->getValue(index);
}

Dog::Dog( void ) : Animal("Dog") {
	Log::a(F, L, C_B, "constructed.");
	_brain = new Brain();
}

Dog::Dog( const Dog& src ) : Animal(src) {
	Log::a(F, L, C_B, "[" + src.getType() + "] copied.");
	type = src.getType();
	_brain = new Brain(*src._brain);
}

Dog& Dog::operator=( const Dog& rhs ) {
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		Log::a(F, L, C_B, "[" + rhs.getType() + "] assignation operator copied.");
		type = rhs.getType();
		delete _brain;
		_brain = new Brain(*rhs._brain);
	}
	return *this;
}

Dog::~Dog( void ) {
	if (_brain != NULL)
		delete _brain;
	Log::a(F, L, C_R, "[" + getType() + "] destructed.");
}
