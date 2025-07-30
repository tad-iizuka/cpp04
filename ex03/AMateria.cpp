/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:01:50 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/30 20:49:19 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {
	Log::a(F, L, C_B, "[" + _type + "] constructed.");
}

std::string const & AMateria::getType() const {
	return _type;
}

void AMateria::use(ICharacter& target) {
	Log::a(F, L, C_G, "use", "[" + target.getName() + "]");
}

AMateria::AMateria( void ) : _type("none") {
	Log::a(F, L, C_B, "[" + _type + "] constructed.");
}

AMateria::AMateria( const AMateria& src ) : _type(src.getType()){
	Log::a(F, L, C_B, "[" + src.getType() + "] copied.");
}

AMateria& AMateria::operator=( const AMateria& rhs ) {
	if (this != &rhs)
	{
		_type = rhs.getType();
		Log::a(F, L, C_B, "[" + rhs.getType() + "] assignation operator copied.");
	}
	return *this;
}
AMateria::~AMateria( void ) {
	Log::a(F, L, C_R, "[" + getType() + "] destructed.");
}
