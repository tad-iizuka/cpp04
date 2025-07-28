/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:27:14 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/29 05:07:06 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName()
		<< "'s wounds *" << std::endl;
}
std::string const & Cure::getType() const {
	return _type;
}
Cure* Cure::clone() const {
	Cure	*cure = new Cure;
	return cure;
}
Cure::Cure( void ) : AMateria("cure") {}
Cure::Cure( const Cure& src ) : AMateria(src) {}

Cure& Cure::operator=( const Cure& rhs ) {
	(void)rhs;
	return *this;
}
Cure::~Cure( void ) {}
