/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:27:19 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/28 11:05:02 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class AMateria;

class Cure : public AMateria
{
	public:

		void use(ICharacter& target);
		std::string const & getType() const;
		Cure* clone() const;

		Cure( void );
		Cure( const Cure& src );
		Cure& operator=( const Cure& rhs );
		~Cure( void );

};

#endif
