/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 04:07:32 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/28 06:14:41 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:

		void	setIdeas(unsigned int index, std::string idea);
		const std::string getIdeas(unsigned int index) const;
		void makeSound( void ) const;

		Dog( void );
		Dog( const Dog& src );
		Dog& operator=( const Dog& rhs );
		~Dog( void );

	private:

		Brain*	brain;

};

#endif
