/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 03:43:47 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/28 06:42:54 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Color.hpp"

class Animal
{

	public:

		virtual void makeSound( void ) const;
		const std::string& getType( void ) const;

		Animal( void );
		Animal( const std::string& name );
		Animal( const Animal& src );
		Animal& operator=( const Animal& rhs );
		virtual ~Animal( void );

	protected:

		std::string type;

};

#endif
