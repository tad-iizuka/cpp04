/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:51:35 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/28 11:09:03 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);

		MateriaSource( void );
		MateriaSource( const MateriaSource& src );
		MateriaSource& operator=( const MateriaSource& rhs );
		~MateriaSource( void );

};

#endif
