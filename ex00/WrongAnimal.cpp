/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 04:34:14 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/30 17:31:37 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void WrongAnimal::makeSound( void ) const {
	Log::a(F, L, C_Y, "makeSound", "[" + type + "]", "wrong wrong");
}

const std::string&	WrongAnimal::getType( void ) const {
	return type;
}

WrongAnimal::WrongAnimal( void ) : type("none") {
	Log::a(F, L, C_B, "[" + type + "] constructed.");
}

WrongAnimal::WrongAnimal( const std::string& name ) : type(name) {
	Log::a(F, L, C_B, "[" + getType() + "] constructed.");
}

WrongAnimal::WrongAnimal( const WrongAnimal& src ) {
	type = src.getType();
	Log::a(F, L, C_B, "[" + src.getType() + "] copied.");
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& rhs ) {
	if (this != &rhs)
	{
		type = rhs.getType();
		Log::a(F, L, C_B, "[" + rhs.getType() + "] assignation operator copied.");
	}
	return *this;
}

WrongAnimal::~WrongAnimal( void ) {
	Log::a(F, L, C_R, "[" + getType() + "] destructed.");
}
