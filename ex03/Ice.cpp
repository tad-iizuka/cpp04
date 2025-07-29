/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:27:38 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/29 17:26:45 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName()
		<<  " *" << std::endl;
}
std::string const & Ice::getType() const {
	return _type;
}
Ice* Ice::clone() const {
	Ice	*ice = new Ice();
	std::cout << C_G << "Ice " << ice << " cloned."
		<< C_CLR << std::endl;
	return ice;
}

Ice::Ice( void ) : AMateria("ice") {
	std::cout << C_B << "Ice constructed."
		<< C_CLR << std::endl;
}

Ice::Ice( const Ice& src ) : AMateria(src) {
	std::cout << C_B << "Ice copied."
		<< C_CLR << std::endl;
}

Ice& Ice::operator=( const Ice& rhs ) {
	if (this != &rhs)
	{
		AMateria::operator=(rhs);
		std::cout << C_B << "Ice " << rhs.getType()
			<< " assignation operator copied." << C_CLR << std::endl;
	}
	return *this;
}
Ice::~Ice( void ) {
	std::cout << C_R << "Ice " << getType() << " destructed."
		<< C_CLR << std::endl;
}
