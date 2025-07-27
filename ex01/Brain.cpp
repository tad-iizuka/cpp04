/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:29:50 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/27 20:47:42 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	for (int i = 0; i < SIZE; ++i) {
			ideas[i] = "empty";
	}
	std::cout << C_B << "Brain constructed."
		<< C_CLR << std::endl;
}

Brain::Brain( const Brain& src ) {
	for (int i = 0; i<SIZE; ++i)
		ideas[i] = src.ideas[i];
	std::cout << C_B << "Brain copied."
		<< C_CLR << std::endl;
}

Brain& Brain::operator=( const Brain& rhs ) {
	if (this != &rhs)
	{
		for (int i = 0; i<SIZE; ++i)
			ideas[i] = rhs.ideas[i];
		std::cout << C_B << "Brain assignation operator copied."
			<< C_CLR << std::endl;
	}
	return *this;
}

Brain::~Brain( void ) {
	std::cout << C_R << "Brain destructed."
		<< C_CLR << std::endl;
}
