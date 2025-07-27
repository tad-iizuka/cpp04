/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 04:34:27 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/27 17:52:43 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void WrongCat::makeSound( void ) const {
	std::cout << C_M << "meow meow." << C_CLR << std::endl;
}

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {
	std::cout << C_B << "WrongCat constructed."
		<< C_CLR << std::endl;
}

WrongCat::WrongCat( const WrongCat& src ) : WrongAnimal(src) {
	type = src.getType();
	std::cout << C_B << "WrongCat " << src.getType() <<  " copied."
		<< C_CLR << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat& rhs ) {
	if (this != &rhs)
	{
		type = rhs.getType();
		std::cout << C_B << "WrongCat " << rhs.getType()
			<< " assignation operator copied." << C_CLR << std::endl;
	}
	return *this;
}

WrongCat::~WrongCat( void ) {
	std::cout << C_R << "WrongCat " << getType() << " destructed."
		<< C_CLR << std::endl;
}
