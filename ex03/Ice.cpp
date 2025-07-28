/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:27:38 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/28 14:19:18 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

void Ice::use(ICharacter& target) {
	(void)target;
}
std::string const & Ice::getType() const {
	return _type;
}
Ice* Ice::clone() const {
	Ice	*ice = new Ice;
	return ice;
}
Ice::Ice( void ) {}
Ice::Ice( const Ice& src ) : AMateria(src) {}

Ice& Ice::operator=( const Ice& rhs ) {
	(void)rhs;
	return *this;
}
Ice::~Ice( void ) {}
