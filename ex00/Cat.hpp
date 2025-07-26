/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 04:07:07 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/27 04:24:16 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:

		void makeSound( void ) const;

		Cat( void );
		Cat( const std::string& type );
		Cat( const Cat& src );
		Cat& operator=( const Cat& rhs );
		~Cat( void );
};

#endif
