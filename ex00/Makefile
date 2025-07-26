# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/27 03:38:19 by tiizuka           #+#    #+#              #
#    Updated: 2025/07/27 04:39:11 by tiizuka          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of target
NAME		=	ex00

# Source, object files
SRCS 		=	main.cpp Animal.cpp Dog.cpp Cat.cpp \
				WrongAnimal.cpp WrongCat.cpp

OBJS		=	$(SRCS:.cpp=.o)

# Compiler setting
CXX			=	g++
CXXFLAGSS	=	-Wall -Wextra -Werror -pedantic -g -std=c++98

# Remove command
RM			= rm

all:		${NAME}

$(NAME) :	$(OBJS)
			$(CXX) $(CXXFLAGSS) -o $(NAME) $(OBJS)

%.o: %.cpp
			$(CXX) $(CXXFLAGSS) -c $< -o $@

# Rule for cleaning object files
clean:
ifneq		("$(wildcard $(OBJS))", "")
			rm $(OBJS)
endif

# Rule for full clean
fclean:		clean
ifneq		("$(wildcard $(NAME))", "")
			rm -f $(NAME)
endif

# Rule for re-build
re:			fclean all

# Phony targets
.PHONY:		all clean fclean re
