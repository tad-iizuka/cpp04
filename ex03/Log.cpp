/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Log.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 21:07:13 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/29 21:29:25 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Log.hpp"

void	Log::a(const char *file, int line, const char *color,
	std::string title,
	std::string sub) {
	std::cout
		<< file << ":"
		<< line << " "
		<< color
		<< title << " "
		<< sub
		<< C_CLR << std::endl;
}
