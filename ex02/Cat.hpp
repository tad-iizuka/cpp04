/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 04:07:07 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/28 07:27:19 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:

		void	setIdeas(unsigned int index, std::string idea);
		const std::string getIdeas(unsigned int index) const;
		void makeSound( void ) const;

		Cat( void );
		Cat( const Cat& src );
		Cat& operator=( const Cat& rhs );
		~Cat( void );

	private:

		Brain*	_brain;

};

#endif
