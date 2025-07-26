/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 04:07:28 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/27 04:24:45 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog::makeSound( void ) const {
	std::cout << C_CY << "bark bark." << C_CLR << std::endl;
}

Dog::Dog( void ) : Animal("anonymous") {
	std::cout << C_B << "Dog anonymous constructed."
		<< C_CLR << std::endl;
}

Dog::Dog( const std::string& name ) : Animal(name) {
	std::cout << C_B << "Dog " << getType() <<  " constructed."
		<< C_CLR << std::endl;
}

Dog::Dog( const Dog& src ) {
	type = src.getType();
	std::cout << C_B << "Dog " << src.getType() <<  " copied."
		<< C_CLR << std::endl;
}

Dog& Dog::operator=( const Dog& rhs ) {
	if (this != &rhs)
	{
		type = rhs.getType();
		std::cout << C_B << "Dog " << rhs.getType()
			<< " assignation operator copied." << C_CLR << std::endl;
	}
	return *this;
}

Dog::~Dog( void ) {
	std::cout << C_R << "Dog " << getType() << " destructed."
		<< C_CLR << std::endl;
}
