/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:27:14 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/30 12:18:44 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

void Cure::use(ICharacter& target) {
	Log::a(__FILE__, __LINE__, C_G, "use", "[" + target.getName() + "]");
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

std::string const & Cure::getType() const {
	return _type;
}

Cure* Cure::clone() const {
	Cure	*cure = new Cure;
	Log::a(__FILE__, __LINE__, C_G,"[" + Log::ptoa(cure) + "] cloned.");
	return cure;
}

Cure::Cure( void ) : AMateria("cure") {
	Log::a(__FILE__, __LINE__, C_B, "constructed.");
}

Cure::Cure( const Cure& src ) : AMateria(src) {
	Log::a(__FILE__, __LINE__, C_B, "copied.");
}

Cure& Cure::operator=( const Cure& rhs ) {
	if (this != &rhs)
	{
		AMateria::operator=(rhs);
		Log::a(__FILE__, __LINE__, C_B, "[" + rhs.getType() + "] assignation operator copied.");
	}
	return *this;
}
Cure::~Cure( void ) {
	Log::a(__FILE__, __LINE__, C_R, "[" + getType() + "] destructed.");
}
