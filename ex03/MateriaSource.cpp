/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:51:00 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/30 08:18:40 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria* m) {
	Log::a(__FILE__, __LINE__, C_G, "learnMateria", "[" + m->getType() + "]");
	if (!m)
	{
		Log::a(__FILE__, __LINE__, C_R, "learnMateria", "AMateria* isn't valid.");
		return;
	}
	for (int i = 0; i < NUM_SOURCE; ++i)
	{
		if (_source[i] == NULL)
		{
			_source[i] = m;
			return;
		}
	}
	Log::a(__FILE__, __LINE__, C_R, "learnMateria", "[" + m->getType() + "]", "no space to store.");
}
AMateria* MateriaSource::createMateria(std::string const & type) {
	Log::a(__FILE__, __LINE__, C_G, "createMateria", "[" + type + "]");
	for (int i = 0; i < NUM_SOURCE; ++i)
	{
		if (_source[i] != NULL && _source[i]->getType() == type)
			return _source[i]->clone();
	}
	Log::a(__FILE__, __LINE__, C_R, "createMateria", "[" + type + "]", "no matched materia found.");
	return NULL;
}

MateriaSource::MateriaSource( void ) {
	Log::a(__FILE__, __LINE__, C_B, "constructed.");
	for (int i = 0; i < NUM_SOURCE; ++i)
		_source[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource& src ) {
	Log::a(__FILE__, __LINE__, C_B, "copied.");
	for (int i = 0; i < NUM_SOURCE; ++i)
	{
		if (src._source[i] != NULL)
			_source[i] = src._source[i]->clone();
		else
			_source[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=( const MateriaSource& rhs ) {
	Log::a(__FILE__, __LINE__, C_B, "assignation operator copied.");
	if (this != &rhs)
	{
		for (int i = 0; i < NUM_SOURCE; ++i)
		{
			if (rhs._source[i] != NULL)
				_source[i] = rhs._source[i]->clone();
			else
				_source[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource( void ) {
	Log::a(__FILE__, __LINE__, C_R, "destructed.");
	for (int i = 0; i < NUM_SOURCE; ++i)
	{
		if (_source[i] != NULL)
		{
			delete _source[i];
			_source[i] = NULL;
		}
	}
}
