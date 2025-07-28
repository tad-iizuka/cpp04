/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:51:00 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/29 04:25:39 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria* m) {
	(void)m;
}
AMateria* MateriaSource::createMateria(std::string const & type) {
	(void)type;
	return NULL;
}

MateriaSource::MateriaSource( void ) {
	for (int i = 0; i < NUM_SOURCE; ++i)
	{
		std::cout << C_Y << "MateriaSource";
		std::cout << " _source ["<< i << "] initialized." << std::endl;
		_source[i] = NULL;
	}
	std::cout << C_B << "MateriaSource constructed."
		<< C_CLR << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource& src ) {
	(void)src;
}
MateriaSource& MateriaSource::operator=( const MateriaSource& rhs ) {
	(void)rhs;
	return *this;
}
MateriaSource::~MateriaSource( void ) {}
