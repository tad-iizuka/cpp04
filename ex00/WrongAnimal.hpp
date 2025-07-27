/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 04:34:20 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/28 07:00:59 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Color.hpp"

class WrongAnimal
{

	public:

		void makeSound( void ) const;
		const std::string&	getType( void ) const;

		WrongAnimal( void );
		WrongAnimal( const std::string& name );
		WrongAnimal( const WrongAnimal& src );
		WrongAnimal& operator=( const WrongAnimal& rhs );
		virtual ~WrongAnimal( void );

	protected:

		std::string type;

};

#endif
