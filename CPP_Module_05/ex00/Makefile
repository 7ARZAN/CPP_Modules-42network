# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/17 09:04:48 by elakhfif          #+#    #+#              #
#    Updated: 2024/03/06 14:21:58 by tarzan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

SRC = Bureaucrat.cpp main.cpp

HEADER = Bureaucrat.hpp

OBJ = build/Bureaucrat.o build/main.o

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Ofast

all: build $(NAME)

build/%.o: %.cpp $(HEADER)
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "\033[0;31mBureaucrat\033[0m\033[0;32m: $@ created\033[0m"

build: 
	@if [ ! -d "build/" ]; then mkdir build; fi
	@echo "\033[0;31mBureaucrat\033[0m\033[0;32m: build directory created\033[0m"

$(NAME): $(OBJ) $(HEADER)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[0;31mBureaucrat\033[0m\033[0;32m: executable created\033[0m"
clean:
	@rm -rf build
	@echo "\033[0;31mbuild\033[0m\033[0;32m directory deleted\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[0;31mexecutable\033[0m\033[0;32m deleted\033[0m"

re: fclean all

.PHONY: all clean fclean re
