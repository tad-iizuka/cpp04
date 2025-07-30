/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:27:14 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/30 14:38:23 by tiizuka          ###   ########.fr       */
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
	Cure	*cure = new Cure;
	Log::a(F, L, C_G,"[" + Log::ptoa(cure) + "] cloned.");
	return cure;
}

Cure::Cure( void ) : AMateria("cure") {
	Log::a(F, L, C_B, "constructed.");
}

Cure::Cure( const Cure& src ) : AMateria(src) {
	Log::a(F, L, C_B, "copied.");
}

Cure& Cure::operator=( const Cure& rhs ) {
	if (this != &rhs)
	{
		AMateria::operator=(rhs);
		Log::a(F, L, C_B, "[" + rhs.getType() + "] assignation operator copied.");
	}
	return *this;
}
Cure::~Cure( void ) {
	Log::a(F, L, C_R, "[" + getType() + "] destructed.");
}
