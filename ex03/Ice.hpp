/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:27:58 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/28 10:45:58 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:

		void use(ICharacter& target);
		std::string const & getType() const;
		Ice* clone() const;

		Ice( void );
		Ice( const Ice& src );
		Ice& operator=( const Ice& rhs );
		~Ice( void );

};

#endif
