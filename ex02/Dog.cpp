/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 04:07:28 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/28 07:28:13 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog::setIdeas(unsigned int index, std::string idea) {
	_brain->setValue(index, idea);
}

const std::string Dog::getIdeas(unsigned int index) const {
	return _brain->getValue(index);
}

void Dog::makeSound( void ) const {
	std::cout << C_CY << "bark bark." << C_CLR << std::endl;
}

Dog::Dog( void ) : Animal("Dog") {
	try {
		_brain = new Brain();
	} catch (std::bad_alloc& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		_brain = NULL;
	}
	std::cout << C_B << "Dog constructed."
		<< C_CLR << std::endl;
}

Dog::Dog( const Dog& src ) : Animal(src) {
	type = src.getType();
	_brain = new Brain(*src._brain);
	std::cout << C_B << "Dog " << src.getType() <<  " copied."
		<< C_CLR << std::endl;
}

Dog& Dog::operator=( const Dog& rhs ) {
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		delete _brain;
		_brain = new Brain(*rhs._brain);
		std::cout << C_B << "Dog " << rhs.getType()
			<< " assignation operator copied." << C_CLR << std::endl;
	}
	return *this;
}

Dog::~Dog( void ) {
	if (_brain != NULL)
		delete _brain;
	std::cout << C_R << "Dog " << getType() << " destructed."
		<< C_CLR << std::endl;
}
