/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:52:10 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/29 13:45:17 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::string const & Character::getName() const {
	return _name;
}
void Character::equip(AMateria* m) {
	std::cout << C_G << "Character " << _name <<  " equip "
		<< m << C_CLR << std::endl;

	if (!m)
	{
		std::cout << C_R << "AMateria* isn't valid." << C_CLR << std::endl;
		return;
	}
	for (int i = 0; i < NUM_SLOT; ++i)
	{
		if (_inv[i] == NULL)
		{
			_inv[i] = m;
			std::cout << C_G << "Character " << _name
				<< " equip " << m->getType() << " at _inv ["
				<< i << "]" << C_CLR << std::endl;
			return;
		}
	}
	std::cout << C_R << "Character " << _name << " no space to equip."
		<< C_CLR << std::endl;
}
void Character::unequip(int idx) {
	(void)idx;
}
void Character::use(int idx, ICharacter& target) {
	std::cout << C_G << "use " << idx <<  " to "
		<< target.getName() << C_CLR << std::endl;

	if (idx < NUM_SLOT && _inv[idx] != NULL)
	{
		_inv[idx]->use(target);
		return;
	}

	std::cout << C_R << "use " << idx << " no available equip."
		<< C_CLR << std::endl;
}

Character::Character( void ) : _name("none") {
	std::cout << C_B << "Character " << _name <<  " constructed."
		<< C_CLR << std::endl;

	for (int i = 0; i < NUM_SLOT; ++i)
	{
		std::cout << C_Y << "Character " << _name;
		std::cout << " _inv ["<< i << "] initialized." << C_CLR << std::endl;
		_inv[i] = NULL;
	}
}

Character::Character( const std::string& name ) : _name(name) {
	std::cout << C_B << "Character " << _name <<  " constructed."
		<< C_CLR << std::endl;

	for (int i = 0; i < NUM_SLOT; ++i)
	{
		std::cout << C_Y << "Character " << _name;
		std::cout << " _inv ["<< i << "] initialized." << C_CLR << std::endl;
		_inv[i] = NULL;
	}
}

Character::Character( const Character& src ) {
	*this = src;
	std::cout << C_B << "Character copied."
		<< C_CLR << std::endl;
}
Character& Character::operator=( const Character& rhs ) {
	if (this != &rhs)
	{
		*this = rhs;
		std::cout << C_B << "Character " << rhs.getName()
			<< " assignation operator copied." << C_CLR << std::endl;
	}
	return *this;
}
Character::~Character( void ) {
	std::cout << C_R << "Character " << getName() << " destructed."
		<< C_CLR << std::endl;
}
