# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/17 09:04:48 by elakhfif          #+#    #+#              #
#    Updated: 2024/03/07 00:19:28 by elakhfif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AForm

SRC = Bureaucrat.cpp AForm.cpp main.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

HEADER = Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp

OBJ = build/Bureaucrat.o build/AForm.o build/ShrubberyCreationForm.o build/RobotomyRequestForm.o build/PresidentialPardonForm.o build/main.o

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Ofast

all: build $(NAME)

build:
	@mkdir -p build
	@echo "\033[0;31mAForm\033[0m\033[0;32m: build created\033[0m"

build/%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "\033[0;31mAForm\033[0m\033[0;32m: $@ created\033[0m"


$(NAME): $(OBJ) $(HEADER)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[0;31mAForm\033[0m\033[0;32m: $(NAME) created\033[0m"

clean:
	@find . -name "*_shrubbery" -type f -delete
	@rm -rf build
	@echo "\033[0;31mAForm\033[0m\033[0;32m: build removed\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[0;31mAForm\033[0m\033[0;32m: $(NAME) removed\033[0m"

re: fclean all

.PHONY: all clean fclean re
