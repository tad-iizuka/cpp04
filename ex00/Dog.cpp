/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 04:07:28 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/30 17:32:52 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog::makeSound( void ) const {
	Log::a(F, L, C_Y, "makeSound", "[" + type + "]", "bark bark");
}

Dog::Dog( void ) : Animal("Dog") {
	Log::a(F, L, C_B, "[" + type + "] constructed.");
}

Dog::Dog( const Dog& src ) : Animal(src) {
	type = src.getType();
	Log::a(F, L, C_B, "[" + src.getType() + "] copied.");
}

Dog& Dog::operator=( const Dog& rhs ) {
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		Log::a(F, L, C_B, "[" + rhs.getType() + "] assignation operator copied.");
	}
	return *this;
}

Dog::~Dog( void ) {
	Log::a(F, L, C_R, "[" + getType() + "] destructed.");
}
