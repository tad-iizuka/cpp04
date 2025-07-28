/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:52:10 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/28 11:07:28 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::string const & Character::getName() const {
	return _name;
}
void Character::equip(AMateria* m) {
	(void)m;
}
void Character::unequip(int idx) {
	(void)idx;
}
void Character::use(int idx, ICharacter& target) {
	(void)idx;
	(void)target;
}

Character::Character( void ) {}
Character::Character( const std::string& name ) : _name(name) {}
Character::Character( const Character& src ) {
	(void)src;
}
Character& Character::operator=( const Character& rhs ) {
	(void)rhs;
	return *this;
}
Character::~Character( void ) {}
