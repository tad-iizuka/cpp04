/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:52:20 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/29 17:57:54 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		Character( void );
		Character( const std::string& name );
		Character( const Character& src );
		Character& operator=( const Character& rhs );
		~Character( void );

	private:

		std::string _name;
		AMateria*		_inv[NUM_SLOT];
		AMateria*		_inv_unequip[NUM_SLOT];
};

#endif
