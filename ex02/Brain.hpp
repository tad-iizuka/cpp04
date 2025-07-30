/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:29:54 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/30 15:26:13 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include "Log.hpp"

#define	SIZE 100

class Brain
{

	public:

		void setValue(int index, const std::string value);
		const std::string getValue(int index) const;

		Brain( void );
		Brain( const Brain& src );
		Brain& operator=( const Brain& rhs );
		virtual ~Brain( void );

	protected:

		std::string ideas[SIZE];

};

#endif
