/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 04:07:02 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/31 06:26:58 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::makeSound( void ) const {
	Log::a(F, L, C_Y, "makeSound", "[" + type + "]", "meow meow");
}

Cat::Cat( void ) : Animal("Cat") {
	Log::a(F, L, C_B, "[" + type + "] constructed.");
}

Cat::Cat( const Cat& src ) : Animal(src) {
	type = src.getType();
	Log::a(F, L, C_B, "[" + src.getType() + "] copied.");
}

Cat& Cat::operator=( const Cat& rhs ) {
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		type = rhs.getType();
		Log::a(F, L, C_B, "[" + rhs.getType() + "] assignation operator copied.");
	}
	return *this;
}

Cat::~Cat( void ) {
	Log::a(F, L, C_R, "[" + getType() + "] destructed.");
}
