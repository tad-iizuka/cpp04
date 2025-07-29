/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:27:14 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/29 13:36:34 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName()
		<< "'s wounds *" << std::endl;
}
std::string const & Cure::getType() const {
	return _type;
}
Cure* Cure::clone() const {
	Cure	*cure = new Cure;
	std::cout << C_G << "Cure " << cure << " cloned."
		<< C_CLR << std::endl;
	return cure;
}
Cure::Cure( void ) : AMateria("cure") {
	std::cout << C_B << "Cure constructed."
		<< C_CLR << std::endl;
}

Cure::Cure( const Cure& src ) : AMateria(src) {
	std::cout << C_B << "Cure copied."
		<< C_CLR << std::endl;
}

Cure& Cure::operator=( const Cure& rhs ) {
	if (this != &rhs)
	{
		AMateria::operator=(rhs);
		std::cout << C_B << "Cure " << rhs.getType()
			<< " assignation operator copied." << C_CLR << std::endl;
	}
	return *this;
}
Cure::~Cure( void ) {
	std::cout << C_R << "Cure " << getType() << " destructed."
		<< C_CLR << std::endl;
}
