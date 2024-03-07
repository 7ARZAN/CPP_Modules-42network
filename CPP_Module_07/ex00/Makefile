# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/17 09:04:48 by elakhfif          #+#    #+#              #
#    Updated: 2024/03/07 19:13:41 by elakhfif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever

SRC = main.cpp

HEADER = whatever.hpp

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
