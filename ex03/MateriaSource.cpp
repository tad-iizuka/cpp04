/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:51:00 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/29 04:58:23 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria* m) {
	std::cout << C_G << "learnMateria " << "[" << m->getType()
		<< "]" << C_CLR << std::endl;

	if (!m)
	{
		std::cout << C_R << "AMateria* isn't valid." << C_CLR << std::endl;
		return;
	}
	for (int i = 0; i < NUM_SOURCE; ++i)
	{
		if (_source[i] == NULL)
		{
			_source[i] = m;
			std::cout << C_G << "learnMateria " << m->getType()
				<< " at _source ["
				<< i << "]" << C_CLR << std::endl;
			return;
		}
	}
	std::cout << C_R << "learnMateria " << m->getType()
		<< " no space to store."<< C_CLR << std::endl;
}
AMateria* MateriaSource::createMateria(std::string const & type) {
	std::cout << C_G << "createMateria " << "[" << type
		<< "]" << C_CLR << std::endl;
	for (int i = 0; i < NUM_SOURCE; ++i)
	{
		if (_source[i] != NULL && _source[i]->getType() == type)
		{
			return _source[i]->clone();
		}
	}
	std::cout << C_R << "createMateria " << type
		<< " no matched materia found." << C_CLR << std::endl;
		return NULL;
}

MateriaSource::MateriaSource( void ) {
	std::cout << C_B << "MateriaSource constructed."
		<< C_CLR << std::endl;

	for (int i = 0; i < NUM_SOURCE; ++i)
	{
		std::cout << C_Y << "MateriaSource"
			<< " _source ["<< i << "] initialized." << C_CLR << std::endl;
		_source[i] = NULL;
	}
}

MateriaSource::MateriaSource( const MateriaSource& src ) {
	(void)src;
}
MateriaSource& MateriaSource::operator=( const MateriaSource& rhs ) {
	(void)rhs;
	return *this;
}
MateriaSource::~MateriaSource( void ) {}
