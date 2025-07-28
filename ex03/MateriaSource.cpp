/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:51:00 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/28 11:09:37 by tiizuka          ###   ########.fr       */
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

MateriaSource::MateriaSource( void ) {}
MateriaSource::MateriaSource( const MateriaSource& src ) {
	(void)src;
}
MateriaSource& MateriaSource::operator=( const MateriaSource& rhs ) {
	(void)rhs;
	return *this;
}
MateriaSource::~MateriaSource( void ) {}
