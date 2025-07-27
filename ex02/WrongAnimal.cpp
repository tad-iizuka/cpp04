/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 04:34:14 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/27 17:52:37 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void WrongAnimal::makeSound( void ) const {
	std::cout << C_M << "wrong animal." << C_CLR << std::endl;
}

const std::string&	WrongAnimal::getType( void ) const {
	return type;
}

WrongAnimal::WrongAnimal( void ) : type("anonymous") {
	std::cout << C_B << "WrongAnimal anonymous constructed."
		<< C_CLR << std::endl;
}

WrongAnimal::WrongAnimal( const std::string& name ) : type(name) {
	std::cout << C_B << "WrongAnimal " << getType() <<  " constructed."
		<< C_CLR << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& src ) {
	type = src.getType();
	std::cout << C_B << "WrongAnimal " << src.getType() <<  " copied."
		<< C_CLR << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& rhs ) {
	if (this != &rhs)
	{
		type = rhs.getType();
		std::cout << C_B << "WrongAnimal " << rhs.getType()
			<< " assignation operator copied." << C_CLR << std::endl;
	}
	return *this;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << C_R << "WrongAnimal " << getType() << " destructed."
		<< C_CLR << std::endl;
}
