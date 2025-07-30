/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 03:46:30 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/30 14:55:34 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void Animal::makeSound( void ) const {
	Log::a(F, L, C_Y, "makeSound");
}

const std::string&	Animal::getType( void ) const {
	return type;
}

Animal::Animal( void ) : type("none") {
	Log::a(F, L, C_B, "[" + type + "] constructed.");
}

Animal::Animal( const std::string& name ) : type(name) {
	Log::a(F, L, C_B, "[" + type + "] constructed.");
}

Animal::Animal( const Animal& src ) {
	type = src.getType();
	Log::a(F, L, C_B, "[" + src.getType() + "] copied.");
}

Animal& Animal::operator=( const Animal& rhs ) {
	if (this != &rhs)
	{
		type = rhs.getType();
		Log::a(F, L, C_B, "[" + rhs.getType() + "] assignation operator copied.");
	}
	return *this;
}

Animal::~Animal( void ) {
	Log::a(F, L, C_R, "[" + getType() + "] destructed.");
}
