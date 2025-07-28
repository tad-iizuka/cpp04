/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:01:50 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/29 04:51:54 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {}

std::string const & AMateria::getType() const {
	return _type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
}

AMateria::AMateria( void ) {}
AMateria::AMateria( const AMateria& src ) {
	(void)src;
}
AMateria& AMateria::operator=( const AMateria& rhs ) {
	(void)rhs;
	return *this;
}
AMateria::~AMateria( void ) {}
