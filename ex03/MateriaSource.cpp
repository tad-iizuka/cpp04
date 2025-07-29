/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:51:00 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/29 15:37:27 by tiizuka          ###   ########.fr       */
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
		std::cout << _source[i] << " " << type << std::endl;
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
	std::cout << C_B << "MateriaSource copied."
		<< C_CLR << std::endl;
	for (int i = 0; i < NUM_SOURCE; ++i)
	{
		if (src._source[i] != NULL)
			_source[i] = src._source[i]->clone();
		else
			_source[i] = NULL;
		std::cout << C_Y << "MateriaSource" << "_source ["<< i << "] "
			<< _source[i] << " from " << src._source[i]
			<< " copied." << C_CLR << std::endl;
	}
}

MateriaSource& MateriaSource::operator=( const MateriaSource& rhs ) {
	std::cout << C_B << "MateriaSource "
		<< " assignation operator copied." << C_CLR << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < NUM_SOURCE; ++i)
		{
			if (rhs._source[i] != NULL)
				_source[i] = rhs._source[i]->clone();
			else
				_source[i] = NULL;
			std::cout << C_Y << "MateriaSource" << "_source ["<< i << "] "
				<< _source[i] << " from " << rhs._source[i]
				<< " copied." << C_CLR << std::endl;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource( void ) {
	std::cout << C_R << "MateriaSource destruced." << C_CLR << std::endl;
	for (int i = 0; i < NUM_SOURCE; ++i)
	{
		if (_source[i] != NULL)
		{
			delete _source[i];
			std::cout << C_M << "delete" << "_source ["<< i << "] "
				<< _source[i] << C_CLR << std::endl;

			_source[i] = NULL;
		}
	}
}
