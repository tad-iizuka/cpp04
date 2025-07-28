/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:01:50 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/28 09:09:30 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {}
std::string const & AMateria::getType() const {} //Returns the materia type
void AMateria::use(ICharacter& target) {}

AMateria::AMateria( void ) {}
AMateria::AMateria( const std::string& name ) {}
AMateria::AMateria( const AMateria& src ) {}
AMateria& AMateria::operator=( const AMateria& rhs ) {}
AMateria::~AMateria( void ) {}
