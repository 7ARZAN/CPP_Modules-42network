# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/28 02:26:22 by elakhfif          #+#    #+#              #
#    Updated: 2024/03/07 15:25:03 by tarzan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serializer

SRC = Serialize.cpp main.cpp

HEADER = Serialize.hpp

OBJ = build/Serialize.o build/main.o

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: build $(NAME)

build:
	@mkdir -p build
	@echo "\033[0;31mSerializer\033[0m\033[0;32m: build created\033[0m"

build/%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "\033[0;31mSerializer\033[0m\033[0;32m: $@ created\033[0m"

$(NAME): $(OBJ) $(HEADER)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[0;31mSerializer\033[0m\033[0;32m: $(NAME) created\033[0m"

clean:
	@rm -rf build
	@echo "\033[0;31mSerializer\033[0m\033[0;32m: build deleted\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[0;31mSerializer\033[0m\033[0;32m: $(NAME) deleted\033[0m"

re: fclean all

.PHONY: all clean fclean re
