# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/17 09:04:48 by elakhfif          #+#    #+#              #
#    Updated: 2024/03/07 19:17:25 by elakhfif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

SRC = main.cpp

HEADER = Array.hpp

OBJ = build/main.o

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: build $(NAME)

build:
	mkdir -p build

build/%.o: %.cpp $(HEADER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf build

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
