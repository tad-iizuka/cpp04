/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:01:50 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/29 13:45:12 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {
	std::cout << C_B << "AMateria " << _type << " constructed."
		<< C_CLR << std::endl;
}

std::string const & AMateria::getType() const {
	return _type;
}

void AMateria::use(ICharacter& target) {
	// std::cout << "* heals " << target.getName()
	// 	<< "'s wounds *" << std::endl;
	(void)target;
}

AMateria::AMateria( void ) : _type("none") {
	std::cout << C_B << "AMateria " << _type << " constructed."
		<< C_CLR << std::endl;
}

AMateria::AMateria( const AMateria& src ) {
	*this = src;
	std::cout << C_B << "AMateria copied."
		<< C_CLR << std::endl;
}
AMateria& AMateria::operator=( const AMateria& rhs ) {
	if (this != &rhs)
	{
		*this = rhs;
		std::cout << C_B << "AMateria " << rhs.getType()
			<< " assignation operator copied." << C_CLR << std::endl;
	}
	return *this;
}
AMateria::~AMateria( void ) {
	std::cout << C_R << "AMateria " << getType() << " destructed."
		<< C_CLR << std::endl;
}
