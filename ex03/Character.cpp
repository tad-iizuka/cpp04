/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:52:10 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/28 09:11:40 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::string const & Character::getName() const {}
void Character::equip(AMateria* m) {}
void Character::unequip(int idx) {}
void Character::use(int idx, ICharacter& target) {}

Character::Character( void ) {}
Character::Character( const std::string& name ) {}
Character::Character( const Character& src ) {}
Character& Character::operator=( const Character& rhs ) {}
Character::~Character( void ) {}
