/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:52:10 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/29 04:23:14 by tiizuka          ###   ########.fr       */
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

Character::Character( void ) : _name("none") {
	for (int i = 0; i < NUM_SLOT; ++i)
	{
		std::cout << C_Y << "Character " << _name;
		std::cout << " _inv ["<< i << "] initialized." << std::endl;
		_inv[i] = NULL;
	}
	std::cout << C_B << "Character " << _name <<  " constructed."
		<< C_CLR << std::endl;
}

Character::Character( const std::string& name ) : _name(name) {
	for (int i = 0; i < NUM_SLOT; ++i)
	{
		std::cout << C_Y << "Character " << _name;
		std::cout << " _inv ["<< i << "] initialized." << std::endl;
		_inv[i] = NULL;
	}
	std::cout << C_B << "Character " << _name <<  " constructed."
		<< C_CLR << std::endl;
}

Character::Character( const Character& src ) {
	(void)src;
}
Character& Character::operator=( const Character& rhs ) {
	(void)rhs;
	return *this;
}
Character::~Character( void ) {}
