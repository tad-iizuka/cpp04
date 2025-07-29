/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Log.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 21:07:13 by tiizuka           #+#    #+#             */
/*   Updated: 2025/07/29 22:16:14 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOG_HPP
#define LOG_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include "Color.hpp"

#define F __FILE__
#define L __LINE__

class Log
{
	public:

		static void	a(const char *file, int line, const char *color, std::string s1,
			std::string s2, std::string s3, std::string s4, std::string s5);	
		static void	a(const char *file, int line, const char *color, std::string s1,
			std::string s2, std::string s3, std::string s4);
		static void	a(const char *file, int line, const char *color, std::string s1,
			std::string s2, std::string s3);
		static void	a(const char *file, int line, const char *color, std::string s1,
			std::string s2);
		static void	a(const char *file, int line, const char *color, std::string s1);
		static std::string itoa(int num);
};

#endif
