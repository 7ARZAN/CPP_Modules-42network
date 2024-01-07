# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/22 08:16:25 by elakhfif          #+#    #+#              #
#    Updated: 2024/01/07 06:40:27 by elakhfif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

CXX = c++

INC = AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Interface

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all
