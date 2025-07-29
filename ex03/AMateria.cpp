/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:01:50 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/30 07:53:28 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {
	Log::a(__FILE__, __LINE__, C_B, "[" + _type + "] constructed.");
}

std::string const & AMateria::getType() const {
	return _type;
}

void AMateria::use(ICharacter& target) {
	Log::a(__FILE__, __LINE__, C_G, "use", "[" + target.getName() + "]");
}

AMateria::AMateria( void ) : _type("none") {
	Log::a(__FILE__, __LINE__, C_B, "[" + _type + "] constructed.");
}

AMateria::AMateria( const AMateria& src ) {
	*this = src;
	Log::a(__FILE__, __LINE__, C_B, "[" + src.getType() + "] copied.");
}
AMateria& AMateria::operator=( const AMateria& rhs ) {
	if (this != &rhs)
	{
		*this = rhs;
		Log::a(__FILE__, __LINE__, C_B, "[" + rhs.getType() + "] assignation operator copied.");
	}
	return *this;
}
AMateria::~AMateria( void ) {
	Log::a(__FILE__, __LINE__, C_R, "[" + getType() + "] destructed.");
}
