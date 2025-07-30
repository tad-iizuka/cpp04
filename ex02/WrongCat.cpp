/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 04:34:27 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/30 14:57:44 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void WrongCat::makeSound( void ) const {
	Log::a(F, L, C_Y, "makeSound", "wrong meow meow");
}

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {
	Log::a(F, L, C_B, "[" + type + "] constructed.");
}

WrongCat::WrongCat( const WrongCat& src ) : WrongAnimal(src) {
	type = src.getType();
	Log::a(F, L, C_B, "[" + src.getType() + "] copied.");
}

WrongCat& WrongCat::operator=( const WrongCat& rhs ) {
	if (this != &rhs)
	{
		type = rhs.getType();
		Log::a(F, L, C_B, "[" + rhs.getType() + "] assignation operator copied.");
	}
	return *this;
}

WrongCat::~WrongCat( void ) {
	Log::a(F, L, C_R, "[" + getType() + "] destructed.");
}
