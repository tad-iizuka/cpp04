/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:29:50 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/28 06:22:59 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

void Brain::setValue(int index, const std::string value) {
	if (index < SIZE)
	{
		ideas[index] = value;
		std::cout << C_Y << "Brain set: " << "\"" << ideas[index]
		<< "\" at " << index << C_CLR << std::endl;
	}
}

const std::string Brain::getValue(int index) const {
	if (index < SIZE)
	{
		std::cout << C_Y << "Brain get: " << "\"" << ideas[index]
		<< "\" at " << index << C_CLR << std::endl;
		return ideas[index];
	}
	return "";
}

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
