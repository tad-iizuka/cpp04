/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 04:07:28 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/27 19:07:16 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog::makeSound( void ) const {
	std::cout << C_CY << "bark bark." << C_CLR << std::endl;
}

Dog::Dog( void ) : Animal("Dog") {
	try {
		brain = new Brain();
	} catch (std::bad_alloc& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		brain = NULL;
	}
	std::cout << C_B << "Dog constructed."
		<< C_CLR << std::endl;
}

Dog::Dog( const Dog& src ) : Animal(src) {
	type = src.getType();
	std::cout << C_B << "Dog " << src.getType() <<  " copied."
		<< C_CLR << std::endl;
}

Dog& Dog::operator=( const Dog& rhs ) {
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		std::cout << C_B << "Dog " << rhs.getType()
			<< " assignation operator copied." << C_CLR << std::endl;
	}
	return *this;
}

Dog::~Dog( void ) {
	if (brain != NULL)
		delete brain;
	std::cout << C_R << "Dog " << getType() << " destructed."
		<< C_CLR << std::endl;
}
