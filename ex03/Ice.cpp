/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:27:38 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/29 05:05:42 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName()
		<<  " *" << std::endl;
}
std::string const & Ice::getType() const {
	return _type;
}
Ice* Ice::clone() const {
	Ice	*ice = new Ice;
	return ice;
}
Ice::Ice( void ) : AMateria("ice") {}
Ice::Ice( const Ice& src ) : AMateria(src) {}

Ice& Ice::operator=( const Ice& rhs ) {
	(void)rhs;
	return *this;
}
Ice::~Ice( void ) {}
