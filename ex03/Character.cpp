/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:52:10 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/30 14:38:23 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::string const & Character::getName() const {
	return _name;
}
void Character::equip(AMateria* m) {
	Log::a(F, L, C_G, "equip", "[" + _name + "]");
	if (!m)
	{
		Log::a(F, L, C_R, "equip", "AMateria* isn't valid.");
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
		else if (_inv[i] == m)
		{
			Log::a(F, L, C_R, "equip", "[" + _name + "]", "already equiped.");
			return;
		}
	}
	Log::a(F, L, C_R, "equip", "[" + _name + "]", "no space to equip.");
}

void Character::unequip(int idx) {
	Log::a(F, L, C_G, "unequip", "[" + Log::itoa(idx) + "]");
	if (idx >= 0 && idx < NUM_SLOT && _inv[idx] != NULL)
	{
		for (int i = 0; i < NUM_SLOT; ++i)
		{
			if (_inv_unequip[i] == NULL)
			{
				_inv_unequip[i] = _inv[idx];
				for (int i = idx; i < NUM_SLOT - 1; ++i)
				{
					_inv[i] = _inv[i + 1];
				}
				_inv[NUM_SLOT - 1] = NULL;
				return;
			}
		}
		Log::a(F, L, C_R, "unequip", "[" + Log::itoa(idx) + "]", "failed, no available backup area.");
	}
	Log::a(F, L, C_R, "unequip", "[" + Log::itoa(idx) + "]", "no available equip.");
}
void Character::use(int idx, ICharacter& target) {
	Log::a(F, L, C_G, "use", "[" + Log::itoa(idx) + "]");
	if (idx >= 0 && idx < NUM_SLOT && _inv[idx] != NULL)
	{
		_inv[idx]->use(target);
		return;
	}
	Log::a(F, L, C_R, "use", "[" + Log::itoa(idx) + "]", "no available equip.");
}

Character::Character( void ) : _name("none") {
	Log::a(F, L, C_B, "[" + _name + "] constructed.");
	for (int i = 0; i < NUM_SLOT; ++i)
	{
		_inv[i] = NULL;
		_inv_unequip[i] = NULL;
	}
}

Character::Character( const std::string& name ) : _name(name) {
	Log::a(F, L, C_B, "[" + _name + "] constructed.");
	for (int i = 0; i < NUM_SLOT; ++i)
	{
		_inv[i] = NULL;
		_inv_unequip[i] = NULL;
	}
}

Character::Character( const Character& src ) {
	Log::a(F, L, C_B, "[" + src.getName() + "] copied.");
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
		Log::a(F, L, C_B, "[" + rhs.getName() + "] assignation operator copied.");
	}
	return *this;
}
Character::~Character( void ) {
	Log::a(F, L, C_R, "[" + getName() + "] destructed.");
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
