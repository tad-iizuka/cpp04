/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:52:10 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/29 22:23:46 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::string const & Character::getName() const {
	return _name;
}
void Character::equip(AMateria* m) {
	Log::a(__FILE__, __LINE__, C_G, "Character", "equip", "[" + _name + "]");
	if (!m)
	{
		Log::a(__FILE__, __LINE__, C_R, "Character", "equip", "AMateria* isn't valid.");
		return;
	}
	for (int i = 0; i < NUM_SLOT; ++i)
	{
		if (_inv[i] == NULL)
		{
			for (int i = 0; i < NUM_SLOT; ++i)
			{
				if (_inv_unequip[i] == m)
					_inv_unequip[i] = NULL;
			}
			_inv[i] = m;
			return;
		}
	}
	Log::a(__FILE__, __LINE__, C_R, "Character", "equip", "[" + _name + "]", " no space to equip.");
}
void Character::unequip(int idx) {
	Log::a(__FILE__, __LINE__, C_G, "Character", "unequip", "[" + Log::itoa(idx) + "]");
	if (idx >= 0 && idx < NUM_SLOT && _inv[idx] != NULL)
	{
		for (int i = 0; i < NUM_SLOT; ++i)
		{
			if (_inv_unequip[i] == NULL)
			{
				_inv_unequip[i] = _inv[idx];
				_inv[idx] = NULL;
				return;
			}
		}
		Log::a(__FILE__, __LINE__, C_R, "Character", "unequip", "[" + Log::itoa(idx) + "]", " failed, no available backup area.");
	}
	Log::a(__FILE__, __LINE__, C_R, "Character", "unequip", "[" + Log::itoa(idx) + "]", " no available equip.");
}
void Character::use(int idx, ICharacter& target) {
	Log::a(__FILE__, __LINE__, C_G, "Character", "use", "[" + Log::itoa(idx) + "]");
	if (idx >= 0 && idx < NUM_SLOT && _inv[idx] != NULL)
	{
		_inv[idx]->use(target);
		return;
	}
	Log::a(__FILE__, __LINE__, C_R, "Character", "use", "[" + Log::itoa(idx) + "]", " no available equip.");
}

Character::Character( void ) : _name("none") {
	Log::a(__FILE__, __LINE__, C_B, "Character", "[" + _name + "] constructed.");
	for (int i = 0; i < NUM_SLOT; ++i)
	{
		_inv[i] = NULL;
		_inv_unequip[i] = NULL;
	}
}

Character::Character( const std::string& name ) : _name(name) {
	Log::a(__FILE__, __LINE__, C_B, "Character", "[" + _name + "] constructed.");
	for (int i = 0; i < NUM_SLOT; ++i)
	{
		_inv[i] = NULL;
		_inv_unequip[i] = NULL;
	}
}

Character::Character( const Character& src ) {
	Log::a(__FILE__, __LINE__, C_B, "Character", "[" + src.getName() + "] copied.");
	for (int i = 0; i < NUM_SLOT; ++i)
	{
		if (src._inv[i] != NULL)
			_inv[i] = src._inv[i]->clone();
	}
}
Character& Character::operator=( const Character& rhs ) {
	if (this != &rhs)
	{
		for (int i = 0; i < NUM_SLOT; ++i)
		{
			if (rhs._inv[i] != NULL)
				_inv[i] = rhs._inv[i]->clone();
		}
		Log::a(__FILE__, __LINE__, C_B, "Character", "[" + rhs.getName() + "] assignation operator copied.");
	}
	return *this;
}
Character::~Character( void ) {
	Log::a(__FILE__, __LINE__, C_R, "Character", "[" + getName() + "] destructed.");
	for (int i = 0; i < NUM_SLOT; ++i)
	{
		if (_inv[i] != NULL)
		{
			delete _inv[i];
			_inv[i] = NULL;
		}
	}
	for (int i = 0; i < NUM_SLOT; ++i)
	{
		if (_inv_unequip[i] != NULL)
		{
			delete _inv_unequip[i];
			_inv_unequip[i] = NULL;
		}
	}
}
