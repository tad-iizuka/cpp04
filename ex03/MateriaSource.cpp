/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:51:00 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/28 09:01:11 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria*) {}
AMateria* MateriaSource::createMateria(std::string const & type) {}

MateriaSource::MateriaSource( void ) {}
MateriaSource::MateriaSource( const std::string& name ) {}
MateriaSource::MateriaSource( const MateriaSource& src ) {}
MateriaSource& MateriaSource::operator=( const MateriaSource& rhs ) {}
MateriaSource::~MateriaSource( void ) {}
