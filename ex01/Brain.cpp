/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:29:50 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/30 15:07:58 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

void Brain::setValue(int index, const std::string value) {
	if (index < SIZE)
	{
		ideas[index] = value;
		Log::a(F, L, C_Y, "setValue", "[" + Log::itoa(index) + "]", "[" + value + "]");
	}
}

const std::string Brain::getValue(int index) const {
	if (index < SIZE)
	{
		Log::a(F, L, C_Y, "getValue", "[" + Log::itoa(index) + "]", "[" + ideas[index] + "]");
		return ideas[index];
		
	}
	return "";
}

Brain::Brain( void ) {
	for (int i = 0; i < SIZE; ++i) {
			ideas[i] = "empty";
	}
	Log::a(F, L, C_B, "constructed.");
}

Brain::Brain( const Brain& src ) {
	for (int i = 0; i<SIZE; ++i)
		ideas[i] = src.ideas[i];
	Log::a(F, L, C_B, "copied.");
}

Brain& Brain::operator=( const Brain& rhs ) {
	if (this != &rhs)
	{
		for (int i = 0; i<SIZE; ++i)
			ideas[i] = rhs.ideas[i];
		Log::a(F, L, C_B, "assignation operator copied.");
	}
	return *this;
}

Brain::~Brain( void ) {
	Log::a(F, L, C_R, "destructed.");
}
