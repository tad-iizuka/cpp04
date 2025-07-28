/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:27:19 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/28 09:20:29 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure
{
	public:

		void use(ICharacter& target);
		AMateria* clone() const;

		Cure( void );
		Cure( const std::string& name );
		Cure( const Cure& src );
		Cure& operator=( const Cure& rhs );
		~Cure( void );

};

#endif
