/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 04:07:02 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/27 04:24:25 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::makeSound( void ) const {
	std::cout << C_M << "meow meow." << C_CLR << std::endl;
}

Cat::Cat( void ) : Animal("anonymous") {
	std::cout << C_B << "Cat anonymous constructed."
		<< C_CLR << std::endl;
}

Cat::Cat( const std::string& name ) : Animal(name) {
	std::cout << C_B << "Cat " << getType() <<  " constructed."
		<< C_CLR << std::endl;
}

Cat::Cat( const Cat& src ) {
	type = src.getType();
	std::cout << C_B << "Cat " << src.getType() <<  " copied."
		<< C_CLR << std::endl;
}

Cat& Cat::operator=( const Cat& rhs ) {
	if (this != &rhs)
	{
		type = rhs.getType();
		std::cout << C_B << "Cat " << rhs.getType()
			<< " assignation operator copied." << C_CLR << std::endl;
	}
	return *this;
}

Cat::~Cat( void ) {
	std::cout << C_R << "Cat " << getType() << " destructed."
		<< C_CLR << std::endl;
}
