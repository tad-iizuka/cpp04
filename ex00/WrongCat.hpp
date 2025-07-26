/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 04:34:33 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/27 04:36:05 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:

		void makeSound( void ) const;

		WrongCat( void );
		WrongCat( const std::string& type );
		WrongCat( const WrongCat& src );
		WrongCat& operator=( const WrongCat& rhs );
		~WrongCat( void );
};

#endif
