/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 03:46:30 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/27 17:52:15 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void Animal::makeSound( void ) const {}

const std::string&	Animal::getType( void ) const {
	return type;
}

Animal::Animal( void ) : type("anonymous") {
	std::cout << C_B << "Animal anonymous constructed."
		<< C_CLR << std::endl;
}

Animal::Animal( const std::string& name ) : type(name) {
	std::cout << C_B << "Animal " << getType() <<  " constructed."
		<< C_CLR << std::endl;
}

Animal::Animal( const Animal& src ) {
	type = src.getType();
	std::cout << C_B << "Animal " << src.getType() <<  " copied."
		<< C_CLR << std::endl;
}

Animal& Animal::operator=( const Animal& rhs ) {
	if (this != &rhs)
	{
		type = rhs.getType();
		std::cout << C_B << "Animal " << rhs.getType()
			<< " assignation operator copied." << C_CLR << std::endl;
	}
	return *this;
}

Animal::~Animal( void ) {
	std::cout << C_R << "Animal " << getType() << " destructed."
		<< C_CLR << std::endl;
}
