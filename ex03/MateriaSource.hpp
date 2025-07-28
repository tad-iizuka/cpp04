/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:51:35 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/28 08:58:24 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

		MateriaSource( void );
		MateriaSource( const std::string& name );
		MateriaSource( const MateriaSource& src );
		MateriaSource& operator=( const MateriaSource& rhs );
		~MateriaSource( void );

};

#endif
