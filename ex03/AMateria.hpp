/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 07:59:27 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/28 11:01:15 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Color.hpp"
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{

	public:

		AMateria( std::string const & type );
		virtual std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

		AMateria( void );
		AMateria( const AMateria& src );
		AMateria& operator=( const AMateria& rhs );
		virtual ~AMateria( void );

	protected:

		const std::string	_type;

};

#endif
