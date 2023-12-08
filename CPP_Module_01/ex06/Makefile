# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 06:02:05 by elakhfif          #+#    #+#              #
#    Updated: 2023/12/09 00:15:53 by elakhfif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)

CPP = c++

INC = Harl.hpp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = harlFilter

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all
