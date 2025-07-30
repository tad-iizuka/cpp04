/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:27:38 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/30 20:50:35 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

void Ice::use(ICharacter& target) {
	Log::a(F, L, C_G, "use", "[" + target.getName() + "]");
	std::cout << "* shoots an ice bolt at " << target.getName() <<  " *" << std::endl;
}

std::string const & Ice::getType() const {
	return _type;
}

Ice* Ice::clone() const {
	Log::a(F, L, C_G,"cloned.");
	return new Ice(*this);
}

Ice::Ice( void ) : AMateria("ice") {
	Log::a(F, L, C_B, "constructed.");
}

Ice::Ice( const Ice& src ) : AMateria(src) {
	Log::a(F, L, C_B, "copied.");
}

Ice& Ice::operator=( const Ice& rhs ) {
	if (this != &rhs)
	{
		AMateria::operator=(rhs);
		Log::a(F, L, C_B, "[" + rhs.getType() + "] assignation operator copied.");
	}
	return *this;
}
Ice::~Ice( void ) {
	Log::a(F, L, C_R, "[" + getType() + "] destructed.");
}
