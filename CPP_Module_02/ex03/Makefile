# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 07:45:21 by elakhfif          #+#    #+#              #
#    Updated: 2023/12/19 01:43:42 by elakhfif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Fixed.cpp bsp.cpp Point.cpp

OBJ = $(SRC:.cpp=.o)

CPP = c++
INC = Fixed.hpp Point.hpp


CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = bsp

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all
