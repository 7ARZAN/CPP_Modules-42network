# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/09 00:27:09 by elakhfif          #+#    #+#              #
#    Updated: 2023/12/21 02:44:33 by elakhfif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp ClapTrap.cpp FragTrap.cpp

OBJ = $(SRC:.cpp=.o)

CPP = c++

INC = ClapTrap.hpp FragTrap.hpp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = FragTrap

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all
