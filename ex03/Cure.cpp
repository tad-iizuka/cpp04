/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:27:14 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/31 06:31:34 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

void Cure::use(ICharacter& target) {
	Log::a(F, L, C_G, "use", "[" + target.getName() + "]");
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

std::string const & Cure::getType() const {
	return _type;
}

Cure* Cure::clone() const {
	Log::a(F, L, C_G,"cloned.");
	return new Cure(*this);
}

Cure::Cure( void ) : AMateria("cure") {
	Log::a(F, L, C_B, "constructed.");
}

Cure::Cure( const Cure& src ) : AMateria(src) {
	_type = src.getType();
	Log::a(F, L, C_B, "copied.");
}

Cure& Cure::operator=( const Cure& rhs ) {
	if (this != &rhs)
	{
		AMateria::operator=(rhs);
		_type = rhs.getType();
		Log::a(F, L, C_B, "[" + rhs.getType() + "] assignation operator copied.");
	}
	return *this;
}
Cure::~Cure( void ) {
	Log::a(F, L, C_R, "[" + getType() + "] destructed.");
}
